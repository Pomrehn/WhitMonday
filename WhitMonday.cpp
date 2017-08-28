// Copyright 2017
// Author: Pelle

#include "./WhitMonday.h"

// Compute the date of Whit Monday
int computeDateOfWhitMonday(int year) {
  int a, b, c, d, e, k, p, q, M, N;
  a = year % 19;
  b = year % 4;
  c = year % 7;
  k = year / 100;
  p = (8*k + 13) / 25;
  q = k / 4;
  M = (15 + k - p - q) % 30;
  d = (19*a + M) % 30;
  N = (4 + k - q) % 7;
  e = (2*b + 4*c + 6*d + N) % 7;
  return 22 + d + e + 50 - 61;
}
