#include<stdio.h>
int main()
{
 float c,f,ce,fe;
 printf("enter the temperature in celsius to convert into fahrenhait :");
 scanf("%f",&c);
 fe = (1.8*c)+32;
 printf("enter the temperature in fahrenhait to convert into celsius :");
 scanf("%f", &f);
 ce = (f-32)/1.8;
 printf("%0.2f\n", fe);
 printf("%0.2f\n ", ce);
 
}