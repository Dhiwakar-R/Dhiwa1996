#include<stdio.h>

// 3 variable add

int main()
{
	int sum,a,b,c;
	printf("Enter a,b,c:\n");
	scanf("%d %d %d",&a,&b,&c);
	sum=a+b+c;
	printf("%d",sum);
}


// By array

int main()
{
	int a[2],sum;
	printf("Enter a,b,c:\n");
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	sum=a[0]+a[1]+a[2];
	printf("%d",sum);
}


// By function

int sum(int a,int b,int c);
int main()
{
	int a,b,c;
	printf("Enter a,b,c:\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("%d",sum(a,b,c));
	return 0;
}
int sum(a,b,c)
{
	int sum;
	sum=a+b+c;
	return sum;
}
