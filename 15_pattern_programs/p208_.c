#include<stdio.h>
main()
{
    int i,n,j;
    printf("\nEnter your limit=");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {   int k=n;
        for(j=1;j<=i;j++)
    {
            printf("%d",k);
            k--;
    }
    
        
        
    printf("\n");
        
    }
}