#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(NULL));
  int min = -12;
  int max = 19;
  int guessCount = 0;
  int guess;

  int random_num = (rand() % (max - min + 1)) + min;
  while(1){
    printf("Enter guess #%d: ", guessCount+1);
    scanf("%d", &guess);
    guessCount++;
    if(guess < random_num){
      printf("Nope Try bigger\n");
    }else if(guess > random_num){
      printf("Nope Try smaller\n");
    }else if(guess == random_num){
      break;
    }
  }
  printf("Now you got it!\n");
  printf("Total guesses you did to win: %d\n", guessCount);
  return 0;
}
