#include<stdio.h>
int main()

{
 int a,b,temp;
 printf("enter a:");
 printf("enter b:");
 scanf("%d%d",&a,&b);
 temp = a;
 a = b;
 b = temp;
 printf("swipped number is :%d%d",a,b);
 return 0;
}
