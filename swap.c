#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("enter two numbers a and b\n");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping\n");
printf(" a=%d and b=%d",a,b);
}
