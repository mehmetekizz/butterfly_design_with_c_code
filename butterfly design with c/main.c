#include <stdio.h>

int main()
{
      int a,i,j,k,l,m,n,x=1;
      
      
    printf("satir sayisi gir: ");
    scanf("%d",&a);
    
     for(i=0;i<a;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        
        for(k=2*a-2*x;k>0;k--)
        {
            printf(" ");
        }
        
        x=x+1;
        
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
        x=1;

    for(l=0;l<a;l++)
    {
        for(m=a;m>l;m--)
        {
            printf("*");
        }
        
        for(n=2*l;n>0;n--)
        {
            printf(" ");
        }
        
       for(m=a;m>l;m--)
        {
            printf("*");
        }
    
        printf("\n");
    }

    return 0;
}

