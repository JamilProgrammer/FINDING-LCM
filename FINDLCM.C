//Program to find LCM of TWO numbers using C.

#include<stdio.h>
#include<conio.h>
int gcd(int a,int b)
{
 if(a==0)
 return b;
 return gcd(b % a,a);
}

int lcm(int a,int b)
{
 return (a/gcd(a,b))*b;
}

void main()
{
 int a=15,b=20;
 clrscr();
 printf("%d",lcm(a,b));
 getch();
}