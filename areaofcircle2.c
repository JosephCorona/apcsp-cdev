#include <stdio.h>
#include <math.h>

// for testing only - do not change
void getTestInput(int argc, char* argv[], int* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%f", a);
    sscanf(argv[2], "%d", b);
  }
}



// add your areaOfCircle function here - it must NOT printf, instead it must
// return the result to be printed in main

int areaOfCircle(int radius){
int area;
area = M_PI*radius*radius;
return area;
}

int main(int argc, char* argv[])
{
// user input

char input[256];
int start;
int reps;

printf("Enter start value:\n");
while (1)
{
fgets(input, 256, stdin);
if (sscanf(input, "%d", &start) == 1) break;
printf("Not a valid start value - try again\n");
}

printf("Enter reps value:\n");
while (1)
{
fgets(input, 256, stdin);
if (sscanf(input, "%d", &reps) == 1) break;
printf("Not a valid reps value - try again\n");
}

  // the two variables which control the number of times areaOfCircle is called
  // in this case 5.2, 6.2, 7.2
//  float start = 5.2;
//  int reps = 3;

  // for testing only - do not change
  getTestInput(argc, argv, &start, &reps);

  printf("calculating area of circle starting at %d, and ending at %d\n", start, start+reps-1);

  // add your code below to call areaOfCircle function with values between
  // start and end
int a;
for(int i = start; i < start+reps; i++){
a = areaOfCircle(i);
printf("%d\n", a);
}

}
