#include<stdio.h>
#include<conio.h>
int main()
{
int sum=0,temp,n,r;
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
sum=sum+(r+r+r);
n=n/10;
}
if(temp==sum)
{
printf("Armstrong");
}
else
{
printf("not an armstrong");
}
return0;
}
