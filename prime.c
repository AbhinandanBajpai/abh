#include<stdio.h>
void main()
{
int n,c=0;
scanf("%d",&n);
  if(n==2)
    printf("prime");
  else
  {
  for(int i=2;i<=n/2;i++)
{
if(n%i==0)
{
c=1;
break;
}
}
if(c==0)
printf("prime");
else
printf("not a prime");
  }
}
