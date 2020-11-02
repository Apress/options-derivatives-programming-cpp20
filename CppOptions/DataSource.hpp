//
//  DataSource.hpp
//
// (c) 2020 Carlos Oliveira
//   This code is part of the book
//   "Options and Derivatives Programming in C++20: Algorithms and Programming Techniques for the Financial Industry 2nd Edition"
//    by Carlos Oliveira, Apress, 2020.
// For more information, visit http://coliveira.net


#ifndef DataSource_hpp
#define DataSource_hpp

#include <string>

class DataSource {
private:
    DataSource(const std::string &name);
    DataSource(const DataSource &p);
    DataSource &operator=(const DataSource &p);
public:
    ~DataSource();  // must be public so clients can use delete

    static DataSource *createInstance();

    void readData();

private:
    std::string m_dataName;
};




#endif /* DataSource_hpp */
