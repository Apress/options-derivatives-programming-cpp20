//
//  DesignPatterns.hpp
//  CppOptions
//
// (c) 2020 Carlos Oliveira
//   This code is part of the book
//   "Options and Derivatives Programming in C++20: Algorithms and Programming Techniques for the Financial Industry 2nd Edition"
//    by Carlos Oliveira, Apress, 2020.
// For more information, visit http://coliveira.net


#ifndef DesignPatterns_hpp
#define DesignPatterns_hpp

class Trade {
    //  ....
};

class ClearingHouse {
private:                   // these are all private because this is a singleton
    ClearingHouse();
    // the copy constructor is not implemented
    ClearingHouse(const ClearingHouse &p);
    ~ClearingHouse();
    // assignment operator is not implemented
    ClearingHouse &operator=(const ClearingHouse &p);

public:
    static ClearingHouse &getClearingHouse();

    void clearTrade(const Trade &);

private:
    static ClearingHouse *s_clearingHouse;
};



#endif /* DesignPatterns_hpp */
