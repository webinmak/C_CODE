# include <stdio.h>
int main ()
{
	int arr[10],i,big,bighold = 0;
    for(i=0;i<=9;i++)
    {
    	printf("Enter a number::");
    	scanf("%d",&arr[i]);
    	
	}
	for(i=0;i<=9;i++)
	{
		(arr[i]>arr[i+1])? (big = arr[i]) : (big = arr[i+1]);
		
		(bighold>big)? (bighold = bighold+0) : (bighold = big);
		
		
	}
	printf("The bigest number is %d",bighold);
	return 0;
}
