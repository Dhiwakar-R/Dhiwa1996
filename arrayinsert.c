#include<stdio.h>
main()
{
	int a[10],n,i,num,index;
	
	printf("Enter size of array:\n");
	scanf("%d",&n);
	
	printf("Enter no.s in array:\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter num to be inserted:\n");
	scanf("%d",&num);
	
	printf("Enter num index:\n");
	scanf("%d",&index);
	
	// to print array before inserting
	printf("Array=\t");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a[i]);
		
	}

	for(i=n;i>=index-1;i--)
	{
		a[i+1]=a[i];
	}
	a[index]=num;
	//printing after inserting
	printf("\n");
	printf("Array=\t");
	for(i=1;i<=n+1;i++)
	{
		printf("%d\t",a[i]);
		
	}
}


