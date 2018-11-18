/* 
 * File:   main.cpp
 * Author: Nadia Rahbany
 * Created on September 11, 2018, 7:34 PM
 */

#include <iostream>
using namespace std;

/* Getting Restaurant Bill Total */
int main(int argc, char** argv) {

     double meal (88.67),
           tax (.068),
           tip (0.2),
           tax_total (meal * tax),
           subtotal (meal + tax_total),
           tip_total (subtotal * tip),
           total (subtotal + tip_total);

            cout <<"Meal Cost:" <<" $" <<meal << endl;
            cout <<"Tax Amount:" <<" $" <<tax_total << endl;
            cout <<"Tip Amount:" <<" $" <<tip_total << endl;
            cout <<"Total Bill:" <<" $" <<total << endl;


    return 0;
}

