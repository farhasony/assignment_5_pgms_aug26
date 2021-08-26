//sum of digits using recursion
#include<stdio.h>
int addnum(int);
int main()
{
	int num;
	printf("enter num\n");
	scanf("%d",&num);
	printf("sum=%d \n",addnum(num));
	return 0;
}
int addnum(int n)
{
    if(n==0)
    return 0;
	return (n%10+addnum(n/10));		
}
/*enter num
786
sum=21*/
