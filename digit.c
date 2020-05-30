#include<stdio.h>
void main()
{
 int n,temp,sum=0;
 printf("Enter the digit :");
 scanf("%d",&n);
 while(n>0)
 {
  temp= n%10;
  sum=sum+temp;
  n=n/10;
 }
 printf("sum of number :%d",sum);
}