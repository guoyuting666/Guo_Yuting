#include<stdio.h>
main()
{
int n,i;
double t,sum;/*1*/
printf("������n��ֵ\n");
scanf("%d",&n);
sum=2;
i=1;
t=2;/*2*/
while(i<n)
{
t=t*(2*i)*(2*i)/(2*i-1)/(2*i+1);/*3*/
// sum=sum*t;
i=i+1;
}
printf("�е�ֵ=%f\n",t);/*4*/
}
