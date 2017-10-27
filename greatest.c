#include<stdio.h>
void main()
{
int c,v,b;
scanf("%d%d%d",&c,&v,&b);
if(c>b&&c>v)
printf("%d",c);
else
if(b>c&&b>v)
printf("%d",b);
else
printf("%d",v);
}
