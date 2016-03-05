#include<stdio.h>
int main()
{
	int a[10],n,i,x;
	printf("Enter array size:\n");
	scanf("%d",&n);
	printf("Enter  array in ascnding order:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter number:\n");
	scanf("%d",&x);

	for(i=0;i<=n;i++)
	{	
	if(a[i]>x)
	{
		if(a[i]==a[i+1] && a[i]==a[i+2])
		{
			printf("O/P:%d(index of %d)\n",(i+2),(a[i+2]));
			break;
		}
		
		else if( (a[i]<a[i+1]) || (a[i]==a[i+1]) )
		{
			printf("O/P:%d(index of %d)\n",i,a[i]);
			break;
		}
		else if(a[i]!=x)	
		{
			printf("O/P:-1,Element not found\n");
			break;
		}
	}
	}
return 0;
}
