# include <stdio.h>
int main()
{
	int i,j,arr[10],sum=0;
	for (i =0;i<=9;i++)
	{
		printf("Enter an integer");
		scanf("%d",&arr[i]);
	}
	for  ( i=0;i<=9;i++)
	{
	printf("%d\n",arr[i]);
	}
	
	for (j=0;j<=9;j++)
	{
		sum+=arr[j];
	
	}
		printf("sum=%d\n",sum);
	return 0;
}
