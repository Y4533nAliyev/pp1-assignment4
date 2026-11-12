#include <stdio.h>

void process(int m, int n); // declaring our function

int main(){
  int m;
  int n;
  
  printf("Give a value for m and n: "); // takes values for m and n 
  scanf("%d %d", &m, &n);

  if(m > n){ // error handling for when m > n
    printf("Wrong input! Please re-enter m and n (m <= n): ");
    scanf("%d %d", &m, &n);
  }
  process(m, n);
  return 0;
}


void process(int m, int n){ // setting our function
  for(m; m <= n; m++){ // iterates over m until it reaches n
    if(m % 3 == 0 && m % 7 == 0){ // we check both cases first and then one by one, because if one is correct the program will not check the other conditions
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
