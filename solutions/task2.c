#include <stdio.h>

int main(){
 // declare and initialize our variables
  int N;
  int num1 = 0;
  int num2 = 1;
  int num3;
  printf("Enter an integer: ");
  scanf("%d", &N);
  
  printf("%d\n", num1);
  printf("%d\n", num2);
  for(int i = 0; i < N-2; i++){ // iterates over the logic of the fibonacci sequence
    num3 = num1 + num2; // set the third number to the number
    num1 = num2; // replace the numbers
    num2 = num3;
    printf("%d\n", num3);
  }

  return 0;
}
