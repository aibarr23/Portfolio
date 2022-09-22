#include <stdio.h>
#include <iostream>
#include <vector>
#include "IntCell.h"
using namespace std;

// Capter 1 Programming A General Overview

//
// 1.3 Brief Introduction to Recursion
//


//
// Using recursion for numerical calculations is usually a bad idea
// this illustrates the basic points
//
int f(int x)
{
    if(x == 0)
        return 0;
    else
        return 2 * f(x - 1) + x * x;
}

//
// Recursive routine to print an integer
// The recursive numper-printing algorithm is correct for n >= 0
//
void printOut(int n) // Print nonegative n
{
    if(n >= 10)
        printOut(n / 10);
    printOut(n % 10);
}

/*
    When writing recursive routines, it is crucial to keep in mind the four
    basic rules of recursion:
    
        1-Base cases, You must always have some base cases, which can be solved
        without recursion
    
        2-Making progress. For the cases that are to be solved recursiely, the 
        recursive call must always be to a case that makes progress toward a base case
    
        3-Design rule. Assume that all the recursive calls work
    
        4-Compund interest rule. Never duplicate work by solving the same instance
        of a problem in seperate recursive calls
*/




//
// 1.4 C++ Classes
// A class in C++ consists of its members. These members can be either data or functions.
// The functions are called member functions.
// Each instance of a class is an object.
// A member function is used to act on an object. Often member funcitons are called methods.
//

//
// creation of 1.h IntCell class
//
// IntCell class implementation in cpp file
//

/**
 * Construct the IntCell with initialValue
 */
IntCell::IntCell(int initialValue) : storedValue{initialValue}
{}

/**
 * Return the stored value
 */
int IntCell::read() const
{
    return storedValue;
}

/**
 * Store x
 */
void IntCell::write(int x)
{
    storedValue = x;
}








int main()
{



    //
    // 1.4
    // Program that uses IntCell class from IntCell.h
    // Test
    //
    IntCell m;

    m.write(5);
    cout << "Cell contents: " << m.read() << endl;


    //
    // Using the vector class: stores 100 squares and ouputs them
    //
    vector<int> squares(100);
    
    for( int i = 0; i < squares.size(); ++i)
        squares[i] = i * i;
    
    for(int i = 0; i< squares.size(); ++i)
        cout << i << " " << squares[i] << endl;
    
    
    
  
    return 0;
}