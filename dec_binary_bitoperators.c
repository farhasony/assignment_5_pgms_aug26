//convert decimal to binary using bitwise operators
#include<stdio.h>
int main()
{
	int num,bit;
	printf("enter decimal number:\n");
	scanf("%d",&num);
	for(bit=31;bit>=0;bit--)
	{
		printf("%d  ",(num>>bit)&1);
	}
	
}
/*enter decimal number:
4
0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  1  0  0*/
