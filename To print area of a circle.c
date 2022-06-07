//program to print area of a circle
#include<stdio.h>
int main()
{
    
    int r=4;
    float pI=3.14,area;
    printf("Enter radius of circle:");
    scanf("%d",&r);
    area=pI*r*r;
    printf("\n Area of a circle:%f",area);
  return 0;
}