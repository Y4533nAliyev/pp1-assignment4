#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int mid = n / 2;

  for (int i = 0; i < n; i++) {
    int d = (i < mid) ? (mid - i) : (i - mid);
    for (int s = 0; s < 2 * d; s++) printf(" ");

  if (d == 0) {
    for (int j = 0; j < n; j++) printf(j == 0 ? "*" : " *");
  }else {
    int h = mid - d;
    for (int j = 0; j < h; j++) printf("# ");
    printf("*");
    for (int j = 0; j < h; j++) printf(" #");
  }
  printf("\n");
  }
  return 0;
}
