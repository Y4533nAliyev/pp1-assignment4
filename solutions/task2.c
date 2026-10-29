#include <stdio.h>

int main(){
  int N;
  int num1 = 0;
  int num2 = 1;
  int num3;
  printf("Enter an integer: ");
  scanf("%d", &N);
  
  printf("%d\n", num1);
  printf("%d\n", num2);
  for(int i = 0; i < N; i++){
    num3 = num1 + num2;
    num1 = num2;
    num2 = num3;
    printf("%d\n", num3);
  }

  return 0;
}
