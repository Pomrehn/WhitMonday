// Copyright 2017
// Author: Pelle

// Include stdio which contains printf
#include <stdio.h>
// Include stdlib which contains exit and atoi
#include <stdlib.h>
// Include declarations from header files
#include "./WhitMonday.h"


int main(int argc, char** argv) {
  if (argc != 2) {
    printf("Usage: ./WhitMondayMain <year> \n");
    exit(1);
  }
  int year = atoi(argv[1]);

  printf("Year: %d\n", year);
  int result = computeDateOfWhitMonday(year);
  printf("Date of Whit Monday %d\n", result);
}
