//
//  main.cpp
//  ArraysAndInts
//
//  Created by Noah VanSickle on 5/1/18.
//  Copyright © 2018 Noah VanSickle. All rights reserved.
//

#include <iostream>
using namespace std;

string* fruit[3] = {}; //getting errors, you said this would happen!!!
string colour[4] = {"Blue", "Red", "Orange", "Yellow"}; //array of strings
int array1 [5] = { 16, 2, 77, 40, 12071 }; //Array of Ints
int n, result=0;
int main(int argc, const char * argv[])
    {
        for ( n=0 ; n<5 ; ++n )
        {
            result += array1[n];
        }
        cout << result;
        
        // Print Strings
        for (int i = 0; i < 4; i++)
            cout << colour[i] << "\n";
        
        
        return 0;
        
    }

    
    


