#include<stdio.h>

int main()
{
  int a = 545;
  char b = 97;
  float c = 12.345;
  double d =123.456;

  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));
  printf("char b value: %d and size %lu bytes\n", b, sizeof(b));
  printf("float c value: %d and size %lu bytes\n", c, sizeof(c));
  printf("double d value: %d and size %lu bytes\n", d, sizeof(d));
}

