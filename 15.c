#include<stdio.h>
void main()
{
	int x,i,n;
	scanf("%d",&n);
	i=1;
	while(i<=10)
	{
		printf("%d x %d= %d\n",n,i,n*i);
		i++;
	}
}
