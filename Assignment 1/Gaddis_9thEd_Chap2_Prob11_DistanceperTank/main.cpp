/* 
 * File:   main.cpp
 * Author: Nadia Rahbany
 * Created on September 11, 2018, 8:52 PM
 */

#include <iostream>

using namespace std;

/*Calculating the Ocean Levels */
int main(int argc, char** argv) {

    double rate(1.5),
           yearnum5(5*rate),
           yearnum7(7*rate),
            yearnum10(10*rate);
    
        cout << "In 5 years the ocean level will be: \t" << yearnum5 << " millimeters higher" << endl;
        cout << "In 7 years the ocean level will be: \t" << yearnum7 << " millimeters higher" << endl;
        cout << "In 10 years the ocean level will be: \t" << yearnum10 << " millimeters higher" << endl;
    
    return 0;
}

