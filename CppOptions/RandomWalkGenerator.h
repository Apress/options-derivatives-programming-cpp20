//
//  RandomWalkGenerator.h
//
// (c) 2020 Carlos Oliveira
//   This code is part of the book
//   "Options and Derivatives Programming in C++20: Algorithms and Programming Techniques for the Financial Industry 2nd Edition"
//    by Carlos Oliveira, Apress, 2020.
// For more information, visit http://coliveira.net


#ifndef __CppOptions__RandomWalkGenerator__
#define __CppOptions__RandomWalkGenerator__

// the class uses a vector to hold the elements
// of the random walk, so they can be later plotted.
#include <vector>

//
// Simple random walk generating class. This class can be
// used for price simulation purposes.
//
class RandomWalkGenerator {
public:
    //
    // class constructors
    RandomWalkGenerator(int size, double start, double step);
    RandomWalkGenerator(const RandomWalkGenerator &p);

    // destructor
    ~RandomWalkGenerator();

    // assignment operator
    RandomWalkGenerator &operator=(const RandomWalkGenerator &p);

    // main method that returns a vector with values of the random walk
    std::vector<double> generateWalk();

    // returns a single step of the random walk
    double computeRandomStep(double currentPrice);

private:
    int m_numSteps;     // the number of steps
    double m_stepSize;  // size of each step (in percentage points)
    double m_initialPrice;     // starting price
};


#endif /* defined(__CppOptions__RandomWalkGenerator__) */
