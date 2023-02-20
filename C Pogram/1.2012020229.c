#include<stdio.h>
#include<conio.h>
int num,sum[500],prevsum,i,j,digit,res,orig,sums;
int square(int n);
main()
{
	clrscr();
	printf("Please enter a number: ");
	scanf("%i",&orig);
	num=orig;
	for(i=1;i<=500;i++)
	{
		while(num>0)
		{
			digit=num%10;
			num=num/10;
			sums=sums+(digit*digit);
		}
		sum[i]=sums;
		prevsum=sum[i];
		num=sum[i];
		if((prevsum==1)||(prevsum==4))
		break;
	}
	for(i=1;sum[i]>0;i++){

    printf("%i--",sum[j]);

}
	if(prevsum==1)
	printf("%i is Happy number.",orig);
	else if(prevsum==4)
	printf("%i belongs to the unhappy numbers.",orig);
	getche();
	return 0;
}
