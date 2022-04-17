//
//  main.cpp
//  C++LAB9
//
//  Created by CHYEN on 2022/4/17.
//

#include <iostream>
#include "sales.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
    using namespace SALES;
    Sales s1;
    Sales s2;
    double ar[3] = {345.2, 621.8, 1073.5};
    std::cout<<"Non-interactive version of setSales() to provide values: "<<std::endl;
    setSales(s1, ar, 3);
    showSales(s1);
    std::cout<<"Interactive version of setSales() to provide values: "<<std::endl;
    setSales(s2);
    showSales(s2);
    return 0;
}
