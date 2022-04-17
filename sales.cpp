//
//  sales.cpp
//  C++LAB9
//
//  Created by CHYEN on 2022/4/17.
//

#include "sales.hpp"
#include <iostream>
//using namespace SALES;

void SALES::setSales(Sales& s, const double ar[], int n){
    double sum = 0;
    s.max = ar[0];
    s.min = ar[0];
    for (int i = 0; i<n; i++) {
        s.sales[i] = ar[i];
        sum += s.sales[i];
        if (ar[i]<s.min) {
            s.min = ar[i];
        }
        if (ar[i]>s.max) {
            s.max = ar[i];
        }
    }
    s.average = sum/n;
}

void SALES::setSales(Sales& s){
    std::cout<<"Enter sales for 4 quarters: ";
    for (int i =0; i<QUARTERS; i++) {
        std::cin>>s.sales[i];
    }
    std::cin.get();
    s.max = s.sales[0];
    s.min = s.sales[0];
    double sum = 0;
    for (int i = 0; i<QUARTERS; i++) {
        sum += s.sales[i];
        if (s.sales[i]<s.min) {
            s.min = s.sales[i];
        }
        if (s.sales[i]>s.max) {
            s.max = s.sales[i];
        }
    }
    s.average = sum/QUARTERS;
}

void SALES::showSales(const Sales& s){
    using namespace std;
    cout<<"Sales:";
    for (int i = 0; i<QUARTERS; i++) {
        if (s.sales[i]) {
            cout<<s.sales[i]<<"  ";
        }
    }
    cout<<endl;
    cout<<"Average:"<<s.average<<endl;
    cout<<"Max:"<<s.max<<endl;
    cout<<"Min:"<<s.min<<endl;
}
