#include <stdio.h>

int main(){
  int N;
  bool isValid = 1;
  printf("Enter a number: ");
  scanf("%d", &N);

  if(!(N < 10) || !(N > 0)){
    printf("Please enter a number within the range (0-10)\n");
    isValid = 0;
  }
  if(isValid){
  printf("* | ");
  for(int i = 1; i <= N; i++){
    printf("%2d ", i);
  }

  printf("\n---");
  for(int i = 0; i < N * 3; i++){
    printf("-");
  }
  printf("\n");


  for(int f = 1; f <= N; f++){
    printf("%d | ", f);
    for(int j = 1; j <= N; j++){
      printf("%2d ", j * f);
     }
    printf("\n");
  }
  }
  return 0;
}
