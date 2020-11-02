//
//  hist.cpp
//  CppOptions
//
//  Created by Carlos Oliveira on 8/8/20.
//  Copyright © 2020 Carlos Oliveira. All rights reserved.
//

#include "hist.hpp"


#include <boost/histogram.hpp>
#include <boost/histogram/ostream.hpp>
#include <cassert>
#include <iostream>
#include <sstream>
#include <string>

int main() {
  using namespace boost::histogram;

  std::ostringstream os;

  auto h1 = make_histogram(axis::regular<>(5, -1.0, 1.0, "axis 1"));
  h1.at(0) = 2;
  h1.at(1) = 4;
  h1.at(2) = 3;
  h1.at(4) = 1;

  // 1D histograms are rendered as an ASCII drawing
  os << h1;
   std::cout << h1;
   return 0;
}
