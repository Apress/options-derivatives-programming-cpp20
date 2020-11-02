//
//  c20test.cpp
//  CppOptions
//
// (c) 2020 Carlos Oliveira
//   This code is part of the book
//   "Options and Derivatives Programming in C++20: Algorithms and Programming Techniques for the Financial Industry 2nd Edition"
//    by Carlos Oliveira, Apress, 2020.
// For more information, visit http://coliveira.net

#include "c20test.hpp"

#include <iostream>
#include <vector>
#include <map>

std::pair<int,int> myfun() { return std::pair(1,2); }

void s() {
   std::map<int,int> s;
   for (auto [aa,bb] : s) {
      std::cout<< aa << bb;
   }
   std::vector vec{1, 2, 3, 4, 5, 6};
   auto [x,z] = myfun();
   // std::cout << *v.begin() << '\n'; // prints 4
}
