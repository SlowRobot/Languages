#include <iostream>
#include <stdlib.h>
int main() {
  int amt = 0;
  std::cout << "How many boxes? ";
  std::cin >> amt;

  if (amt < 1) {
    std::cout << "Please enter a value > 0. EXITING." << std::endl;
    exit(EXIT_FAILURE);
  }

  int row = 0;
  int col = 0;
  int counter = 0;
  int boundary = 0;
  int lim = amt*4 - 1;
  int mid = lim/2;
  int alt = 1;

  for(row = 0; row < lim; row++) {

    alt=1;
    boundary = counter*2;

    for (col = 0; col < lim; col++) {

        if (col <= boundary || col >= lim-boundary-1) {
          if (alt) { 
            std::cout << "#";
          } else {
            std::cout << " ";
          }
        } else if (col > boundary && col < lim-boundary) {
          if (row % 2 == 0) {
            std::cout << "#";
          } else {
            std::cout << " ";
          }
        }

        if (alt == 0) {
          alt=1;
        } else {
          alt = 0;
        }
    }

    if (row % 2 == 1 && row < mid) {
      counter++;
    } else if (row % 2 == 0 && row > mid) {
      counter--;
    }
    std::cout << std::endl;
  }

}
