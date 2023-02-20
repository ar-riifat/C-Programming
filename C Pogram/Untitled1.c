#include<stdio.h>

int main()
{

    int Data[100];
    int i,N,k=1,Loc=1, maxm;

    scanf("%d",&N);

    for(i=0;i<N;i++)
        scanf("%d",&Data[i]);

    maxm= Data[0];

    while(k<N)
    {
       if(maxm<Data[k])
        {
            Loc=k, maxm=Data[k];
        }
        k++;
    }

    printf("Maximum number is: %d and Location is: %d\n",maxm,Loc+1);


    return 0;
}
