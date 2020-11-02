//
//  DateCompact.h
//
// (c) 2020 Carlos Oliveira
//   This code is part of the book
//   "Options and Derivatives Programming in C++20: Algorithms and Programming Techniques for the Financial Industry 2nd Edition"
//    by Carlos Oliveira, Apress, 2020.
// For more information, visit http://coliveira.net


#ifndef __CppOptions__DateCompact__
#define __CppOptions__DateCompact__

//
// a compact representation for dates, using a character string
//
class DateCompact {
public:
    DateCompact(int year, int month, int day);
    DateCompact(const DateCompact &p);
    ~DateCompact();
    DateCompact &operator=(const DateCompact &p);

    void setYear(int y);
    void setMonth(int m);
    void setDay(int d);

    int year();
    int month();
    int day();

    void print();

    bool operator==(const DateCompact &d) const;
    bool operator<(const DateCompact &d) const;

private:
    char m_date[8];
};


#endif /* defined(__CppOptions__DateCompact__) */
