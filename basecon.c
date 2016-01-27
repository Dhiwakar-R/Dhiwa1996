#include<stdio.h>
int main()
{
  int ans[100],n,base;
	int i=0,j,r;
  printf("enter no.:");
  scanf("%d",&n);
  printf("enter base:");
  scanf("%d",&base);
  if(n!=0)
  {
	  while(n>0)
		{
	    r=n%base;
    	if(r<10)
    	{
			  ans[i]=r+48;
			}
			else
    	{
				ans[i]=r+55;
    	}
			n=n/base; 
    	i++;
    }
    printf("Binary value:");
    for(j=i-1;j>=0;j--)
    {
    	printf("%c",ans[j]);
    }
	}
	else
	{
		printf("Binary value:1");
	}   	
	return 0;
}
