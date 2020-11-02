//
//  CDS.hpp
//  CppOptions
//
// (c) 2020 Carlos Oliveira
//   This code is part of the book
//   "Options and Derivatives Programming in C++20: Algorithms and Programming Techniques for the Financial Industry 2nd Edition"
//    by Carlos Oliveira, Apress, 2020.
// For more information, visit http://coliveira.net


#ifndef CDS_hpp
#define CDS_hpp

#include <stdio.h>


#include <utility>

#include <ql/instruments/barrieroption.hpp>
#include <ql/processes/blackscholesprocess.hpp>

//
// CDSSolver class, incorporates the solution to Credit Default
class CDSSolver : boost::noncopyable {
public:

   // constructor
   CDSSolver(double val, double sigma, double divYield,
             double rf, double strike, double barrier, double rebate);

   // solve the model
   std::pair<QuantLib::BarrierOption, QuantLib::BlackScholesMertonProcess>
   solve(QuantLib::Date maturity_date);

   // generate a grid
   void generateGrid(QuantLib::BarrierOption &option,
                     QuantLib::BlackScholesMertonProcess &process,
                     const std::vector<QuantLib::Size> &grid);

private:

   double cur_val;
   double sigma;
   double divYield;
   double rf;
   double strike;
   double barrier;
   double rebate;
};


#endif /* CDS_hpp */
