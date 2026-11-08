#include <stdio.h>

int main() {
  int n;
  int isValid = 1;
  if (scanf("%d", &n) != 1){
    isValid = 0;
  } 
  if(isValid){

  int count = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < count; j++) {
      printf("#");
      }
    printf("\n");
    count += i;
    }
  }
  return 0;
}
