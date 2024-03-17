#include<stdio.h>

main()
{
	//print all alphabets from a to z by skipping 3 alphabets using do while
	
	char ch = 'a';
	int count = 0;
	
	printf("output =");
	
	do{
		printf("%c",ch);
		ch += 4;
		count++;
	}while(ch<='z');
}