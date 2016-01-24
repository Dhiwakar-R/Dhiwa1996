#include <stdio.h>
int main()
{
	int n,bit=0;
	printf("Binary no.:");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/2;
		bit++;
	}
	printf("Bits needed=%d",bit);
return 0;
}
