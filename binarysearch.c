#include<stdio.h>
int binary_search(int a[],int num,int first,int last)
{
	int middle;
	middle=( (first+last)/2 );
	if(a[middle]==num)
	{
		return middle;
	}
	
	else if(a[middle]>num)
	{
		binary_search(a,num,first,middle-1);
	}
	
	else if(a[middle]<num)
	{
		binary_search(a,num,middle+1,last);
	}

}

int main()
{
	int a[10],i,n,num,term;
	printf("Enter no. of elements in array:\n");
	scanf("%d",&n);
	printf("Enter no.s:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to search:\n");
	scanf("%d",&num);
	term=binary_search(a,num,0,n);
	printf("Num is at %d location",term);

}
