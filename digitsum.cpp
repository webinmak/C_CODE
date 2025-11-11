# include <stdio.h>
int main()
{
	int n,i=1,og,sum,rem,count=0;
	printf("Enter a number");
	scanf("%d",&n);
	og=n;
	 while (n!=0)
	 {
	 	n/=10;
	 	count+=1;
	 }
	 n=og;
	 while(n!=0)
	 {
	 	rem=n%10;
	 	sum+=rem;
	 	n/=10;
	 }
	 printf("Sum of %d digits is %d",count,sum);
	 return 0;
	 
	
}
