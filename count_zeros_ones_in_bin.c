//wap to count total zeros and ones in a binary number
#include<stdio.h>
int main()
{
	int num,bit,count=0;
	printf("enter decimal number:\n");
	scanf("%d",&num);
	for(bit=31;bit>=0;bit--)
	{
		printf("%d  ",(num>>bit)&1);
		count=count+1;
	}
	printf("\n%d",count);	
}
/*enter decimal number:
4
0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  1  0  0
32*/
