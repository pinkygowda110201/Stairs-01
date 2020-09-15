#include <stdio.h>
main()
{
	int i,j,n;
	n=6;
	//outer loop
	for(i=1;i<=n;i++)
	{
		//inner loop
		for(j=1;j<=i;j++)
		{
			printf("01");
		}
		printf("\n");//To jump to new line
	}
}
