#include<stdio.h>
int main()
{
    int n,b,i,j,x,y,a[30],k;
    printf("Enter the no. of element:"); 
    scanf("%d",&n);
    printf("Enter the elements n:");
    for(k=0;k<n;k++)
    scanf("%d",&a[k]);
    printf("subsets :\n");
    for(b=1;b<=n;b++)
    {
        for(x=0;x<=n-k;x++)
        {  
            printf("%d\n",a[j]);
        }
        if(b==1)
            printf("%d\n",a[k]);
        else
        {
           i=x+b-1;
           for(j=y;j<n;j++)
           {
               for(i=x;i<y;i++)
               printf("%d",a[i]);
                 
            }
        }
     
    }

}





