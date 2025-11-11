# include <stdio.h>
# include <math.h>
int main ()
{
	int i,count=0,og,rem,rev=0,n;
	
	printf("Enter a number");
	scanf("%d",&n);
	og=n;
	while (n!=0)
	{
		n/=10;
		count++;
	}
	n=og;
	while(n!=0)
	{
		rem=n%10;
		rev  = rev + pow(rem,count);
		n/=10;
	}
	
	(og==rev)? printf("The number is an armstrong"):printf("The number is not an armstrong");
	return 0;
	
}
