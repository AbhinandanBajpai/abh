#include <stdio.h>

void main()
{
    int n,m,c=0;
    scanf("%d%d",&n,&m);
  
   
        for(int i=n;i<=m;i++)
        {
            for(int j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    c=1;
                    break;
                }
                
            }
            if(c==0)
            {
                printf("%d",i);
            }
            c=0;
        }
        
    }
