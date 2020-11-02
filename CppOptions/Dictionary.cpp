//
//  Dictionary.cpp

#include "Dictionary.h"


#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <sstream>

using std::string;
using std::vector;
using std::set;
using std::map;
using std::cout;
using std::endl;
using std::cerr;

struct AA {
    int a, b;
};

extern "C"
{
int testfunc(int);
int add_to_n(int);
int add_numbers(int *, int);
int access_st(AA *s);
}

Dictionary::Dictionary(int wordSize)
: m_values(),
m_valuePositions(),
m_adjacencyList(),
m_wordSize(wordSize)
{
    int a = testfunc(33);
    cout << " **** tfunc val: "  << a << endl;
    int b = add_to_n(10);
    cout << " **** sum val: "  << b << endl;
    int v[] = {1, 2, 3, 4, 5, 6, 7, 2};
    int c = add_numbers(v, sizeof(v)/sizeof(v[0]));
    cout << " **** add val: "  << c << endl;
    AA d;
    d.a = 5;
    d.b = 7;
    int e = access_st(&d);
    cout << " **** vals: "  << d.a << "  " << e  << endl;
}

const std::vector<std::vector<bool> > &Dictionary::adjList()
{
    return m_adjacencyList;
}

Dictionary &Dictionary::operator=(const Dictionary &p)
{

    if (&p != this)
    {
        m_adjacencyList = p.m_adjacencyList;
        m_valuePositions = p.m_valuePositions;
        m_values = p.m_values;
        m_wordSize = p.m_wordSize;
    }
    return *this;
}

//
// true if the words a and b differ by just one character
//
bool diffByOne(const string &a, const string &b)
{
    if (a.size() != b.size()) return false;
    int ndiff = 0;
    for (unsigned i=0; i<a.length(); ++i)
    {
        if (a[i] != b[i]) ndiff++;
    }
    return ndiff == 1;
}

bool Dictionary::contains(const string &s)
{
    return m_valuePositions.find(s) != m_valuePositions.end();
}

int Dictionary::elemPosition(const string &s)
{
    return m_valuePositions[s];
}

void  Dictionary::addElement(const string &s)
{
    if (s.size() != m_wordSize)
    {
        throw std::runtime_error("invalid string size");
    }
    m_values.push_back(s);
    m_valuePositions[s] = (int)m_values.size() - 1;
    cout << " added " << s << endl;
}

string Dictionary::elemAtPos(int i)
{
    return m_values[i];
}

void Dictionary::buildAdjancencyMatrix()
{
    m_adjacencyList.clear();
    int n = (int)m_values.size();
    for (int i=0; i<n; ++i)
    {
        m_adjacencyList.push_back(vector<bool>(n));
        for (int j=0; j<n; ++j)
        {
            if (diffByOne(m_values[i], m_values[j]))
            {
                m_adjacencyList[i][j] = 1;
            }
        }
    }
}

