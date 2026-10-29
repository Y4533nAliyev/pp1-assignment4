#include <stdio.h>

int main(){
  int N;
  double D;
  printf("Enter an integer: ");
  scanf("%d", &N);

  printf("Enter a double: ");
  scanf("%lf", &D);

  for(int i = 0; i < 2 * N + 1; i++){
    printf("%.2lf\n", D);
  }
  return 0;
}
