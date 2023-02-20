#include<stdio.h> 

int search(int array[],int a, int find)

{
int middle,left=0,right=a-1;


while(left<=right)

{

middle = (left+right)/2;

if(array[middle]==find)

{

return middle;

}

if(array[middle]<find)

{

left = middle+1;

}

else

{

right = middle-1;

}

}

}

int main()

{

int a=5;

int array[a],find=4;

for(int i=0; i<a; i++)

{

scanf("%d",&array[i]);

}

int position;

position = search(array,a,find);



printf("%d\n",position+1);



}
