#include<stdio.h>
int main()
{
	int n,i,count=0;
	char a[50];
	printf("Enter no. of terms in equation:\n");
	scanf("%d",&n);
	printf("Enter equation:\n");
	for(i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
	}

	for(i=0;i<=n;i++)
	{
		if( ((a[i]>=65) && (a[i]<=90))  || ((a[i]>=97) && (a[i]<=122)) )
		{
			count=count+1;
		}		
	}
	printf("O/P: %d",count);

return 0;
}
