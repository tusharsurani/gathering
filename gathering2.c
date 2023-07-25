#include<stdio.h>
sum(int p[],int n)
{
	int i,add=0;
	for(i=0;i<n;i++)
	{
		add = add + p[i];
	}
	printf( "sum of arry : %d ",add); 
}
main()
{
	int c[100],i,n;
	printf("enter arry size : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("c[%d] = ",i);
		scanf("%d",&c[i]);
	}
	sum(c,n);
}
