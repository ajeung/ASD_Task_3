#ifndef MY_DATA_H_INCLUDED
#define MY_DATA_H_INCLUDED

#include <iostream>
using namespace std;

/**
    CLASS      : IF-42-04
    NAME       : Ajeung Angsaweni
    STUDENT ID : 1301180108
**/

struct mytype {
    /**
     TODO:  create a new Data type with specification:
            - an integer variable acted as an ID
            - string name
            - integer rank
            - float score
    */
    //=================================================
    // YOUR CODE STARTS HERE
    //your code here
    int id;
    string name;
    int Rank;
    float score;
    // YOUR CODE ENDS HERE
    //=================================================
};


mytype create_data();
void view_data(mytype d);
void edit_data(mytype &d);

#endif // MY_DATA_H_INCLUDED
