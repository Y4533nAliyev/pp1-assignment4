#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int mid = n / 2;

  for (int i = 0; i < n; i++) { // Loop through each row
    int d = (i < mid) ? (mid - i) : (i - mid); // Distance from the middle row
    for (int s = 0; s < 2 * d; s++) printf(" ");
  
  // if it's the middle row
  if (d == 0) {
    for (int j = 0; j < n; j++) printf(j == 0 ? "*" : " *");
  }else { // if not, for rows above and below center, print left side "#", middle "*", right "#"
    int h = mid - d;
    for (int j = 0; j < h; j++) printf("# ");
    printf("*");
    for (int j = 0; j < h; j++) printf(" #");
  }
  printf("\n"); // next line
  }
  return 0;
}
