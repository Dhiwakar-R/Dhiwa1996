#include<stdio.h>

	int main()
	{
		char A;
		int i,n,s,d,c,ap,gp;
		printf("Enter type of progression A or P\t:");
		scanf("%c",&c);
		printf("Enter n,s,d:\n");
		scanf("%d %d %d",&n,&s,&d);
		if(c=='A')
		{
			ap=s;			
			for(i=0;i<n;i++)
			{
				printf("%d\t",ap);
				ap=ap+d;
			}
		}
		else
		{   
			gp=s;
			for(i=0;i<n;i++)
			{
				printf("%d\t",gp);
				gp=gp*d;
			}
		}
	}

		
		
		
		
	
