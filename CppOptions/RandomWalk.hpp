//
//  RandomWalk.hpp
//
// (c) 2020 Carlos Oliveira
//   This code is part of the book
//   "Options and Derivatives Programming in C++20: Algorithms and Programming Techniques for the Financial Industry 2nd Edition"
//    by Carlos Oliveira, Apress, 2020.
// For more information, visit http://coliveira.net


#ifndef RandomWalk_hpp
#define RandomWalk_hpp


#include <vector>

// Simple random walk for price simulation
class RandomWalkModel {
public:
    RandomWalkModel(int size, double start, double step);
    RandomWalkModel(const RandomWalkModel &p);
    ~RandomWalkModel();
    RandomWalkModel &operator=(const RandomWalkModel &p);

    std::vector<double> getWalk();
private:
    int random_integer(int max);

    int m_numSteps;      // number of steps
    double m_stepSize;   // size of each step (in percentage)
    double m_startPrice; // starting price
};


#endif /* defined(__FinancialSamples__RandonWalk__) */

