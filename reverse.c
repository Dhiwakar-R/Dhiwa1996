#include <stdio.h>
int main()
{
	int num,temp,rev=0;
	printf("Enter any number:");
	scanf("%d",&num);
	while(num)
	{
		temp=num%10;
		rev=rev*10 + temp;
		num=num/10;
	}
	printf("After reversing: %d",rev);
	return 0;
}
	
