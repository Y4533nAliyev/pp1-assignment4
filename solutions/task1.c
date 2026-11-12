#include <stdio.h>

int main(){
  int N; // user assigned integer
  double D; // user assigned double
  printf("Enter an integer: ");
  scanf("%d", &N);

  printf("Enter a double: ");
  scanf("%lf", &D);

  for(int i = 0; i < 2 * N + 1; i++){ // our for loop goes until the double of our integer + 1
    printf("%g\n", D);
  }
  return 0;
}
