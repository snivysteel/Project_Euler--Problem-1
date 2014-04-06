//
//  main.cpp
//  Project_Euler:Problem 1
//
/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000 
 */
//  Created by Ryan Wong on 5/4/14.
//  Copyright (c) 2014 rwjhwong. All rights reserved.
//

#include <iostream>
using namespace std;

int main (){
    int mult3, mult5, mult15,count,sum1,sum2,sum3,fnalsm;
    sum1 = 0;
    sum2 = 0;
    sum3 = 0;
    fnalsm = 0;
    cout << "This is Question 1 in Project Euler. (projecteuler.net)" << endl << endl;
    cout << "Problem 1:" << endl << endl << "If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23." << endl << endl << "Find the sum of all the multiples of 3 or 5 below 1000." << endl << endl;

    for (count=1; count<1000; count++){
    mult3=count%3;
        if (mult3==0) sum1 = sum1 + count;
    }
    
    for (count=1; count<1000; count++){
        mult5=count%5;
        if (mult5==0) sum2 = sum2 + count;
    }
    
    for (count=1; count<1000; count++){
        mult15=count%15;
        if (mult15==0) sum3 = sum3 + count;
    }
    
    fnalsm= sum1 + sum2 - sum3;
    
    cout << "The sum of all the multiples of 3 or 5 below 1000 is:" << fnalsm << endl;
    
    return 0;
}

