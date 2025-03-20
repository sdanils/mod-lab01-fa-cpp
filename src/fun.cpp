// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *str) {
  int count = 0;
  bool inWord = false;
  while (*str) {
    if (*str != ' ' && inWord == false) {
      count++;
      inWord = true;
    } else if (*str == ' ' && inWord == true) {
      inWord = false;
    }
    str++;
  }
  return count;
}

unsigned int faStr2(const char *str) {
  int count = 0;
  bool inWord = false;
  while (*str) {
    if (*str >= 65 && *str <= 90) {
      count++;
      inWord = true;
      str++;
      bool correct = true;
      while (*str) {
        if (*str == ' ') {
          inWord = false;
          break;
        } else if (*str < 97 || *str > 122 && correct == true) {
          count--;
          correct = false;
        }
        str++;
      }
    } else if (*str == ' ' && inWord == true) {
      inWord = false;
    }
    str++;
  }
  return count;
}

unsigned int faStr3(const char *str) {
  int count = 0, num_chars = 0;
  bool inWord = false;
  while (*str) {
    num_chars++;
    if (*str != ' ' && inWord == false) {
      count++;
      inWord = true;
    } else if (*str == ' ') {
      num_chars--;
      if (inWord == true) inWord = false;
    }
    str++;
  }
  double result = num_chars / count;
  result *= 10;
  int result_int = result;
  if (result_int % 10 >= 5)
    result_int = result_int / 10 + 1;
  else
    result_int = result_int / 10;

  return result_int;
}
