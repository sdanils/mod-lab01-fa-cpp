// Copyright 2022 UNN-IASR
#include <iostream>
#include <string>
#include <vector>

#include "fun.h"

using std::cout;
using std::string;
using std::vector;

int main() {
  vector<string> strings = {"qwe4  gftt e 555gr rrgr  grhh ",
                            "  qwe4 ",
                            "Hello, world!",
                            "Hello world!",
                            " bad dog ",
                            " six monkeys"};

  if (faStr1(strings[0].c_str()) != 4) {
    cout << " Uncor 0";
  }
  if (faStr1(strings[1].c_str()) != 0) {
    cout << " Uncor 1";
  }
  if (faStr2(strings[2].c_str()) != 0) {
    cout << " Uncor 2";
  }
  if (faStr2(strings[3].c_str()) != 1) {
    cout << " Uncor 3";
  }
  if (faStr3(strings[4].c_str()) != 3) {
    cout << " Uncor 4";
  }
  if (faStr3(strings[5].c_str()) != 5) {
    cout << " Uncor 5";
  }

  return 0;
}
