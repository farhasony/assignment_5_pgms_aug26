#include<stdio.h>
#include<string.h>
int main()
{
	char *str,*str1,c,ch;
	int n,i;
	printf("enter no of characters\n");
	scanf("%d",&n);
	str=(char*)calloc(n,sizeof(char));
	printf("enter string\n");
	for(i=0;i<=n;i++)
	{
		
		scanf("%c",&c);
		str[i]=c;
	}
	
	str1=(char*)calloc(n,sizeof(char));
	printf("enter character to remove occurences from string\n");
	scanf("\n%c", &ch);
	str1=str;
//	printf("%s",str1);
	for(i=0;str1[i];i++)
	{
		if(str1[i]==ch)
		{
			memmove(str1+i,str1+i+1,strlen(str1+i+1)+1);
			i--;
		}
	}
	printf("modified%s",str1);
}
/*enter no of characters
5
enter string
farha
enter character to remove occurences from string
a
modified
frh*/

