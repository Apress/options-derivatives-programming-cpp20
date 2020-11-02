//
//  DataSource.cpp
//
// (c) 2020 Carlos Oliveira
//   This code is part of the book
//   "Options and Derivatives Programming in C++20: Algorithms and Programming Techniques for the Financial Industry 2nd Edition"
//    by Carlos Oliveira, Apress, 2020.
// For more information, visit http://coliveira.net


#include "DataSource.hpp"


DataSource::DataSource(const std::string &name)
: m_dataName(name)
{
}

DataSource::DataSource(const DataSource &p)
: m_dataName(p.m_dataName)
{
}

DataSource &DataSource::operator=(const DataSource &p)
{
    if (this != &p)
    {
        m_dataName = p.m_dataName;
    }
    return *this;
}

DataSource::~DataSource()
{
}


DataSource *DataSource::createInstance()
{
    std::string sourceName;
    // complex method used here to find sourceName and other construction parameters ....
    DataSource *ds = new DataSource(sourceName);
    return ds;
}

void DataSource::readData()
{
    // read data here ...
}


void useDataSource()
{
    // DataSource *source = new DataSource(""); // this will not work!
    DataSource *source = DataSource::createInstance();
    source->readData();
    // do something else with data
    delete source;
}
