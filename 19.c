#include<stdio.h>
main()
{
	int i,f=1,num;
	printf("enter the number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	
	{
	
	f=f*i;
}
printf("factorial %d is= %d", num,f);
}
