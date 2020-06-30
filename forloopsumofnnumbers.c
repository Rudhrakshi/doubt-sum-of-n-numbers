// sum of n numbers using for loop 
#include<stdio.h>
int main()
{
	int num=0,i,sum=0;
	for(i=0;num!=0;i++)
	{
		printf("enter the num:");
		scanf("%d",&num);
		sum=sum+num;
	}
	printf("sum of all the numbers is %d",sum);
	return 0;
}
