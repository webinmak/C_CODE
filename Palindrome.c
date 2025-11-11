# include <stdio.h>
int main()
{
	int rev=0,rem,n,og;
	printf("Enter a number");
	scanf("%d",&n);
	og=n;
	
	while(n!=0)
	{
		rem =n%10;
		rev = rev*10+rem;
		n/=10;
	}  
	(rev==og)?printf("Since %d = %d hence number is a Palindrome",rev,o78g):printf("Since %d not = %d hence number is not a Palindrome",rev,og);
	return 0;
}
