#include<stdio.h>
void main()
{
int i,n,s;
scanf("%d",&n);
s=n;
for(i=1;i<=5;i++)
{
n=n*i;
printf("%d*%d=%d\n",s,i,n);
n=s;
}
}
