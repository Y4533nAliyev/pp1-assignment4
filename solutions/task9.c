#include <stdio.h>

int main() {
  int n;
  printf("Enter N (1 < N < 10): ");
  if (scanf("%d", &n) != 1) return 0; // Get input and check if valid
  
  for (int i = 0; i < n; i++) { // Loop through each row
    int limit = n - i; // Decreasing limit for each row
    for (int j = 1; j <= limit; j++) { // Print the left-side numbers
        printf("%d ", j);
    }
    if (i > 0) { // Print middle spaces (for rows after the first)
      int spaces = 4 * i - 2;
      for (int s = 0; s < spaces; s++) {
          printf(" ");
      }
    }
    int start = (i == 0) ? limit - 1 : limit;  // Set the starting number for the right side
    for (int j = start; j >= 1; j--) {  // Print the right-side numbers in reverse order
        printf("%d", j);
        if (j > 1) printf(" ");
    }
    printf("\n"); // Move to the next line
  }
  return 0;
}
