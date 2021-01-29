#include <stdio.h>
#include <math.h>
#include <conio.h>

float area(int a,int b, int c)
{
  float s,area=0.0;
  clrscr ();
  s=(a+b+c)/2;
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  return area;
}

int main()
{
     int a,b,c;
     clrscr ();
     float ar=0.0;
     printf("enter the sides of triangle: ");
     scanf("%d %d %d", &a,&b,&c);
     ar=area(a,b,c);
     printf("the area of triangle is %f", ar);
     getch ();
     return 0;
}


