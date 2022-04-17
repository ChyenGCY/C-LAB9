//
//  sales.hpp
//  C++LAB9
//
//  Created by CHYEN on 2022/4/17.
//

#ifndef sales_hpp
#define sales_hpp

#include <iostream>

namespace SALES{
const int QUARTERS = 4;
struct Sales{
    double sales[QUARTERS];
    double average;
    double max;
    double min;
};

void setSales(Sales& s, const double ar[], int n);

void setSales(Sales& s);

void showSales(const Sales& s);
}
#endif /* sales_hpp */
