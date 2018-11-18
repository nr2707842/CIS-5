/* 
 * File:   main.cpp
 * Author: Nadia Rahbany
 * Created on September 11, 2018, 7:53 PM
 */

#include <iostream>
using namespace std;

/*Total Average Values */

int main(int argc, char** argv) {

    double a(28),
            b(32),
            c(37),
            d(24),
            e(33),
            totalsum(a+b+c+d+e),
            average(totalsum/5);
    
    cout<<"The Average is: "<<average<<endl;
    
    return 0;
}

