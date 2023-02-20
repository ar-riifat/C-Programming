#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        int n;
        scanf("%d",&n);
        int w[n+1],c[n+1],sum=0,temp=0;
        for(int i=1;i<n+1;i++)
        {
         scanf("%d %d",&w[i],&c[i]);
         sum+=w[i];
        }
        int a[n+1][sum+1];
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<n-i;j++)
            {
                if(w[j]>=w[j+1])
                {
                    temp=w[j];
                    w[j]=w[j+1];
                    w[j+1]=temp;
                    temp=c[j];
                    c[j]=c[j+1];
                    c[j+1]=temp;
                }
            }
        }
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                a[i][j]=0;
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(j<w[i])
                {
                    if(a[i-1][j]>a[i][j-1])
                    a[i][j]=a[i-1][j];
                    else
                    a[i][j]=a[i][j-1];
                }
                else
                {
                    int p=c[i]+a[i-1][j-w[i]];
                    if(p>a[i-1][j])
                    a[i][j]=p;
                    else
                    a[i][j]=a[i-1][j];
                }
            }
        }
        printf("\n");
        for(int i=1;i<sum+1;i++)
        printf("%d ",a[n][i]);
    return 0;
}
