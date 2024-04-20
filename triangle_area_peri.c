#include<stdio.h>

int areaTriangle(int h, int b);
int semi_peri(int a, int b, int c);

int main()
{
   printf("Area of triangle is %d\n", areaTriangle(78,23));
   printf("Semi_perimeter of triangle is %d\n", semi_peri(2,3,4));
    return 0;
}
int areaTriangle(int h, int b)
{
    return (h*b)/2;
}
int semi_peri(int a, int b, int c)
{
    return (a+b+c)/2;
}