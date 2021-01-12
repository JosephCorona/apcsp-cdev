#include <stdio.h>

int main()
{

  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %p\n", (void*)ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %p\n", (void*)&a);

  int c;

  float d = 3;
  float* ptrtod;
  ptrtod = &d;
  printf("The value of d is %d\n", d);
  *ptrtod = 1;
  printf("The address of a is %p\n", (void*)&d);

 float e = 4;
  float* ptrtoe;
  ptrtoe = &e;
  printf("The value of e is %d\n", e);
  *ptrtoe = 1;
  printf("The address of e is %p\n", (void*)&e);

  c = d;
  d = e;
  e = c;
}
