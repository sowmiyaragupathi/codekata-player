//string reverse without string reverse function
#include<stdio.h>
#include<string.h>
 int main(void) {
   char str[100], temp;
   int i, j = 0;
   gets(str);
   i = 0,j = strlen(str) - 1;
	while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
  printf("%s", str);
   return 0;
}
