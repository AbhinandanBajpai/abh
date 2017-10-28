#include<stdio.h>
int fac(int);
void main()
{
int i,n;
scanf("%d",&n);
i=fact(n);
printf("%d",i);
}
int fac(int n)
{
if(n==0)
return 1;
else
return(n*fac(n-1));
}
