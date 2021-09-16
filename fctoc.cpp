#include <stdio.h>
int main()
{
  float c,f;
  printf("Fahrenheit:");
  scanf("%f",&f);
  c=(f-32)/1.8;
  printf("Celsius:%.2f",c);
}