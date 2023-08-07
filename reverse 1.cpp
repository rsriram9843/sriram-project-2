#include<stdio.h>
int main()
{
	char a[100],t;
	scanf("%s",a);
	int m=0,f;
	for(int i=0;a[i]!='\0';i++)
	{
		m++;
	}
for(int i=m-1;i>=0;i--)
{
	int c=0;
	if(a[i]>='a' && a[i]<='z')
	{
		c++;
	}
	else if(a[i]>='0' && a[i]<='9')
	{
		t=a[i];
		printf("%c",a[i]);
		f=i+1;
		while(f<m && (!(a[f]>='0' && a[f]<='9')))
		{
			printf("%c",a[f]);
			f++;
		}
	}
}
}
