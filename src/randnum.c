#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int make_random_number() {
  struct timespec ts;
  clock_gettime(CLOCK_REALTIME, &ts);

  srand(ts.tv_nsec);

  return rand();
}

int main(int argc, char *argv[]) {
  if (argc != 2 && argc != 1) {
    fprintf(stderr, "Usage: %s <number of numbers>\n", argv[0]);
  } else if (argc == 1) {
    printf("%d\n", make_random_number());
  } else {
    for (int i = 0; i < atoi(argv[1]); i++) {
      printf("%d\n", make_random_number());
    }
  }
  return 0;
}
