#include<stdio.h>
int inArray(int a[],int n,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(a[i]==n)
		{
			return i;
		}
	}
	return -1;
}



int main()
{
	int a[10],i,size,index,n;
	printf("Enter size:\n");
	scanf("%d",&size);
	printf("Enter numbers:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter num:\n");
	scanf("%d",&n);
	index=inArray(a,n,size);
	
	
	if(index==-1)
	{
		printf("O/P:-1\n");
		printf("Number not found\n");
	}

	
	else	
	{
		printf("O/P:1\n");
		printf("Number found at %d location\n",index);
	}
	

	
	return 0;

}

