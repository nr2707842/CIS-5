/* 
 * File:   main.cpp
 * Author: Nadia Rahbany
 * Created on September 11, 2018, 9:04 PM
 */

#include <iostream>

using namespace std;

/* Calculating the total number of acres*/
int main(int argc, char** argv) {

    int landequivilent;
    int tractofland;
    int totalnumberofacres;
    
    landequivilent= 43560;
    tractofland=391876;
    totalnumberofacres= tractofland/landequivilent;
    
    cout<<"The Number of Acres in a tract of land "<<totalnumberofacres<<" square feet"<<endl;
    return 0;
}

