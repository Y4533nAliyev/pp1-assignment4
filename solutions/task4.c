#include <stdio.h>
#include <stdlib.h> // we will need this library for rand()
#include <time.h> // we will need this library for our random function

int main(){
  srand(time(NULL));
  int min = -11;
  int max = 18;
  int guessCount = 0;
  int guess;

  int random_num = (rand() % (max - min + 1)) + min; // generates a random number
  while(1){ // while it is active
    printf("Enter guess #%d: ", guessCount+1);
    scanf("%d", &guess);
    guessCount++; // increment 1 everytime the user guesses
    if(guess < random_num){ // checking our guess and comparing it 
      printf("Nope Try bigger\n");
    }else if(guess > random_num){
      printf("Nope Try smaller\n");
    }else if(guess == random_num){
      break; // finally when it finds the number, we exit out of the loop
    }
  }
  printf("Now you got it!\n");
  printf("Total guesses you did to win: %d\n", guessCount);
  return 0;
}
