#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "../include/fxansi_4bit.h"

void usage() {
  fprintf(stderr, "%sUsage: randnum <number of numbers>%s\n", ANSI_FG_RED,
          ANSI_RESET);
}

int main(int argc, char *argv[]) {
  struct timespec ts;
  clock_gettime(CLOCK_REALTIME, &ts);

  srand(ts.tv_nsec);

  if (argc > 2) {
    usage();

  } else if (argc == 1) {
    printf("%d\n", rand());

  } else {
    for (int i = 0; i < atoi(argv[1]); i++) {
      printf("%d\n", rand());
    }
  }
  return 0;
}
