#include<stdio.h>

main()
{
	// find the sum of a first and the last digit of a number.
	 
    int n,s,sum=0;
    
    printf("enter the number=");
    scanf("%d",&n);
    
    sum = n % 10;
    
    while(n>0)
    {
    	s = n % 10;
    	n = n / 10;
	}
	sum = sum + s;
	
	printf("sum=%d",sum);
	
}