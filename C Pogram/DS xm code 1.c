#include<stdio.h>

int main()
{

int arra[100];
int pos[100];
int N,i,key,pos=-1;
scanf("%d",&N);

for(i=o;i<N;i++)
{
   scanf("%d",&arra[i]);
}

scanf("%d,&key");

for(i=0;i<N;i++)
{
    if(arra[i]==key)
    {
       pos=i+1;
       break;
    }
}
if(pos==-1)
    printf("Item was not found in the array!!/n");
else
    printf("Item was found at pos: %d/n",pos);

    return 0;
}
