#include <stdio.h>

void process(int m, int n);

int main(){
  int m;
  int n;
  
  printf("Give a value for m and n: ");
  scanf("%d %d", &m, &n);

  if(m > n){
    printf("Wrong input! Please re-enter m and n (m <= n): ");
    scanf("%d %d", &m, &n);
  }
  process(m, n);
  return 0;
}


void process(int m, int n){
  for(m; m <= n; m++){
    if(m % 3 == 0 && m % 7 == 0){
      printf("LoveJava\n");
      continue;
    }else if(m % 3 == 0){
      printf("Love\n");
      continue;
    }else if(m % 7 == 0){
      printf("Java\n");
      continue;
    }
    printf("%d\n", m);
  }
}
