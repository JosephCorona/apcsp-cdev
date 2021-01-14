#include <stdio.h>
#include <string.h>

int main()
{
char myString[26];

char myString2[] = "abcdefghijklmnopqrstuvwxyz";

char letter = 'a';

for (int i = 0; i < 26; i++)
{
  myString[i] = letter;

  letter = letter + 1;

}

letter = 'a';

myString[26] = '\0';

if (strcmp(myString, myString2) == 0)

  printf("myString and myString2 are identical\n");

  else

  printf("the strings are different");

for (int i = 0; i < 26; i++)
{
  myString[i] = myString[i] - 32;

}

if (strcmp(myString, myString2) == 0)

  printf("myString and myString2 are identical\n");

  else

  printf("the strings are different\n");

char myString3[52];

strcpy(myString3, myString);
strcat(myString3, myString2);
printf("the uppercase letters of the alphabet are %s\n", myString);
printf("the lowercase letters of the alphabet are %s\n", myString2);
printf("the uppercase and lowercase letters of the alphabet are %s\n", myString3); 

}
