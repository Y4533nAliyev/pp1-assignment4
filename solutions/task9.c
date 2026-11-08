#include <stdio.h>

int main() {
  int n;
  printf("Enter N (1 < N < 10): ");
  if (scanf("%d", &n) != 1) return 0;
 
  for (int i = 0; i < n; i++) {
  int limit = n - i;
  for (int j = 1; j <= limit; j++) {
    printf("%d ", j);
  }
  if (i > 0) {
    int spaces = 4 * i - 1;
    for (int s = 0; s < spaces; s++) {
      printf(" ");
    }
  }
  int start = (i == 0) ? limit - 1 : limit;
  for (int j = start; j >= 1; j--) {
    printf("%d", j);
    if (j > 1) printf(" ");
  }
  printf("\n");
  }
  return 0;
}
