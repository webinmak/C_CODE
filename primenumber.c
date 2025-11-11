# include <stdio.h>
int main()
{
	int i,n,count=0;
	printf("Enter a number");
	scanf("%d",& n);
	for(i=2;i<=n/2;i++)
	{
		if (n%i==0)
		{
			break;
		}
		else
		{
			count=count+1;
		}
	}
	if (count==n/2-1)
	{
		printf("Prime");
		
	}
	else
	{
		printf("not prime");
	}
	return 0;
}
