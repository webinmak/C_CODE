
# include <stdio.h>
int main()
{
	int i=1,j=1;
	do
	{
		do
		{
			printf("*#");
			j++;
		}
		while(j<=i);
		j=1;
		printf("\n");
		i++;
	}
	while(i<=5);
	return 0;
}
