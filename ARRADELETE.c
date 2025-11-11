# include <stdio.h>
int main()
{
	int pos,i,n,arr[100];
	printf("Enter number of elements for your array");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
	printf("Enter number into array");
	scanf("%d",&arr[i]);
    }
    printf("enter position to be deleted");
    scanf("%d",&pos);
    
    // nos sort the staff
    for(i=pos-1;i<n-1;i++)
    arr[i]=arr[i+1];
    n--;
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
    return 0;
}
