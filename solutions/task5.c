#include <stdio.h>
#include <stdlib.h> // library needed for rand()
#include <time.h> // library needed for making our random integer

int main(){
  srand(time(NULL));
  int min = 0;
  int max = 6;
  int chance = 0;
  printf("Let the Game Begin! (cc 'Saw')\n");
  for(int i = 0; i < 3; i++){ 
    int random_num1 = (rand() % (max - min + 1)) + min; // generates a number between 0-6
    int random_num2 = (rand() % (max - min + 1)) + min; // generates a number between 0-6
    printf("Chance #%d: %d %d\n", chance+1, random_num1, random_num2);
    chance++;
    if(random_num1 == random_num2 && random_num1 == 6){ // checks if both numbers are equal to eachother, and if they are both 6
      printf("Yeah, I rock at this!\n");
      break; // we should also break here since, if we don't we would also get the losing message
    }
    if(chance == 3 && random_num1 != random_num2){ 
      printf("Ahh, today is just not my day, I guess :(\n");
    }
  }
  return 0;
}
