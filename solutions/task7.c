#include <stdio.h>

int main() {
  int n;
  int isValid = 1;
  if (scanf("%d", &n) != 1){
    isValid = 0;
  } 
  if(isValid){
  int count = 1;
  for (int i = 1; i <= n; i++) { // loops it for n times
    for (int j = 0; j < count; j++) { // prints '#' characters up to the current 'count' value
      printf("#"); 
      }
    printf("\n"); // move to the next line after completing a row
    count += i; // Increment count for the next row by adding i
    }
  }
  return 0;
}
