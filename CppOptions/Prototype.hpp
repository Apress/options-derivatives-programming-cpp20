//
//  Prototype.hpp
//
// (c) 2020 Carlos Oliveira
//   This code is part of the book
//   "Options and Derivatives Programming in C++20: Algorithms and Programming Techniques for the Financial Industry 2nd Edition"
//    by Carlos Oliveira, Apress, 2020.
// For more information, visit http://coliveira.net


#ifndef Prototype_hpp
#define Prototype_hpp

class Prototype {
private:
    Prototype();
    Prototype(const Prototype &p);
    Prototype &operator=(const Prototype &p);

public:
    ~Prototype();
    Prototype *clone() const;
    void setVar1(int v);
    static const Prototype &getPrototype();

private:
    int m_var1;
    static Prototype *s_prototype;
    
};



#endif /* Prototype_hpp */
