#include<stdio.h>
int main()
{ 
	int num;
	float i,j=1;
	printf("Enter any no:");
	scanf("%d",&num);
	i=num;
	while((i-j)>0.0001)
	{
		i=(i+j)/2;
		j=num/i;
	}
	printf("Square root= %f",i);
	return 0;
}
