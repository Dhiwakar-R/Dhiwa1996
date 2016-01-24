#include<stdio.h>
int main()
{
    int n,b,a[30],k,i,j,x,y;
    printf("Enter the no. of element:"); 
    scanf("%d",&n);
    printf("Enter the elements:");
    for(k=0;k<n;k++)
    scanf("%d",&a[k]);
    printf("subsets :\n");
    for(b=1;b<=n;b++)
    {
        for(x=0;x<=n-b;x++)
        {
        if(b==1)
        	{
				printf("%d\n",a[x]);
        	}
			else
        	{
           	i=x+b-1;
           	for(j=i;j<n;j++)
           		{
               		for(y=x;y<i;y++)
            		{
               			printf("%d",a[y]);
           			}
           			printf("%d\n",a[j]);
            	}	
        	}
        }
     
    }

}






