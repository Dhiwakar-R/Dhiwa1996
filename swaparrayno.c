#include<stdio.h>
int main()
{
	int a[10],n,i,half,temp,start;
	printf("Enter array size:\n");
	scanf("%d",&n);
	printf("Enter no.s in array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("No. before swaping:\t\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
	half=(n/2);
	if(n%2==0)
	{
		start=half;
	}
	else
	{
		start=half+1;
	}

	printf("\n");
	
	printf("No. after swaping:\n");
	for(i=start;i<n;i++)
	{
		printf("%d",a[i]);
	}
	if(n%2!=0)
	{
	printf("%d",a[half]);
	}	
	for(i=0;i<half;i++)
	{
		printf("%d",a[i]);
	}

return 0;
	
}
