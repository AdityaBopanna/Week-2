#include<stdio.h>
#include<math.h>
#include<conio.h>
float average(float,float,float);
int main ()
{
   float a,b,c,avg;
   clrscr ();
   printf("Enter three numbers\n");
   scanf("%f %f %f",&a,&b,&c);
   avg=average(a,b,c);
   printf("The average of three numbers is=%.2f", avg);
   getch ();
   return 0;
}
float average(float a,float b,float c)
{
     float avg=0.0;
     avg=(a+b+c)/3.0;
     return avg;
}



