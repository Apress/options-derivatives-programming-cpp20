//
//  BlackScholes.hpp
//
// (c) 2020 Carlos Oliveira
//   This code is part of the book
//   "Options and Derivatives Programming in C++20: Algorithms and Programming Techniques for the Financial Industry 2nd Edition"
//    by Carlos Oliveira, Apress, 2020.
// For more information, visit http://coliveira.net


#ifndef BlackScholes_hpp
#define BlackScholes_hpp

#include <vector>

class BlackScholesMethod {
public:
    BlackScholesMethod(double expiration, double maxPrice, double strike, double intRate);
    BlackScholesMethod(const BlackScholesMethod &p);
    ~BlackScholesMethod();
    BlackScholesMethod &operator=(const BlackScholesMethod &p);

    std::vector<double> solve(double volatility, int nx, int timeSteps);
private:
    double m_expiration;
    double m_maxPrice;
    double m_strike;
    double m_intRate;
};
#endif /* BlackScholes_hpp */
