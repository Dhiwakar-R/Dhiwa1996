#include <stdio.h>
int main()
{
    int a[10][10],i,j,n,k;
    printf("Enter the size of odd no.");
	scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        a[i][j]=0;
      }
    }
    i=0;
    j=n/2;
    k=1;
    while(k<=n*n)
    {
        if(a[i][j]==0)
	    {
	 	    a[i][j]=k;
            k++;
            --i;
            if(i<0)
            {
                i=n-1;
            }
            ++j;
            if(j>=n)
            {
                j=0;
            }
        }
        else
    {
  	
  	i=(i+2)%n;
    j--;
    if(j<0)
        {
    	   j=n-1;
        } 
	}
    }
    printf("Magic square:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
	        {
	             printf("%d\t",a[i][j]);
	        }
        printf("\n");
    }
    return 0;
}

