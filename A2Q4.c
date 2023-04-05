
#include <stdio.h>

int main() {
  int array[] = {10, 15, 90, 200, 110};
  int n = sizeof(array) / sizeof(array[0]);
  int max_diff = 0;
  int i, j;

  // Find the maximum difference
  for (i = 0; i < n; i++) {
    for (j = i+1; j < n; j++) {
      if (array[j] - array[i] > max_diff) {
        max_diff = array[j] - array[i];
      }
    }
  }

  printf("Maximum difference is %d", max_diff);

  return 0;
}


