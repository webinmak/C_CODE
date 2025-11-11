# include <stdio.h>
int main ()
{
	int arr[10],i,small,smallhold = 0;
    for(i=0;i<=9;i++)
    {
    	printf("Enter a number::");
    	scanf("%d",&arr[i]);
    	
	}
	for(i=0;i<=9;i++)
	{
		(arr[i]<arr[i+1])? (small = arr[i]) : (small = arr[i+1]);
		
		(smallhold>small)? (smallhold = smallhold+0) : (smallhold = small);
		
		
	}
	printf("The smallest number is %d",smallhold);
	return 0;
}
