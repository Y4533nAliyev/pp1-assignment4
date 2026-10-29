#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(NULL));
  int min = 0;
  int max = 6;
  int chance = 0;
  printf("Let the Game Begin! (cc 'Saw')\n");
  for(int i = 0; i < 3; i++){
    int random_num1 = (rand() % (max - min + 1)) + min;
    int random_num2 = (rand() % (max - min + 1)) + min;
    printf("Chance #%d: %d %d\n", chance+1, random_num1, random_num2);
    chance++;
    if(random_num1 == random_num2){
      printf("Yeah, I rock at this!\n");
      break;
    }
    if(chance == 3 && random_num1 != random_num2){
      printf("Ahh, today is just not my day, I guess :(\n");
    }
  }
  return 0;
}
