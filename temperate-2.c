#include<stdio.h>

main()
{
	// count the total number of digits in a number.
	
	int n,count=0;
	
	printf("enter the number=");
	scanf("%d",&n);
	
	while(n>0)
	{
		n = n / 10;
		count++;
	}
	
	printf("total %d digits",count);
}