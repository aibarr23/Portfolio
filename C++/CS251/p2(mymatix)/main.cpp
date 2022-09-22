// Testing code
// 
// << ANTHONY IBARRA >>
// U. of Illinois, Chicago
// CS 251: Spring 2020
// Project #02
//
//

#include <sstream>
#include <fstream>
#include <string> 
using namespace std;

#include "mymatrix.h"

//functions for testing

// test build default matrix (makes 4*4 matrix)
void test_matrd(){
    
    cout << "testing of matrix default build: matrix M 4*4:" << endl;
    mymatrix<int> M;
    M._output();
    cout << endl;
}

// test build parameterized matrix (makes n*l matrix)
void test_matrp(int n, int l){
    
    cout << "testing of matrix parameterized build: matrix N 5*6:" << endl;
    mymatrix<int> N(n, l);
    N._output();
    cout << endl;
}

//makes a default matrix and grow row by some number of columns
void test_growC(){
     
    mymatrix<int> P;
    
   // cout << "testing grow column from row default function: matrix P" << endl;
    //P._output();
    //cout << endl;
    int u = 0;
    for(int r = 0; r < P.numrows(); r++){
        for( int c = 0; c < P.numcols(r); c++){
           P(r, c) = u;
            u++;
        }
    }
    
    cout << "growing row 2 by 8 columns of default matrix:" << endl;//row 2 equals 3 due to number start with 0
    P.growcols(2, 8);
    P._output();
    cout << endl;
    
    
}

//test grow function by making a matrix into a staircase then grow the parts lacking to form a rectangle
void test_matrixG(){
    
    mymatrix<int> Z;
    Z.growcols(0, 5);
    Z.growcols(1, 6);
    Z.growcols(2, 7);
    Z.growcols(3, 8);
    cout << "making matrix into ""staircase"":" << endl;
    
        int u = 0;
    for(int r = 0; r < Z.numrows(); r++){
        for( int c = 0; c < Z.numcols(r); c++){
           Z(r, c) = u;
            u++;
        }
    }
    
    Z._output();
    cout << endl;
    
    cout << "grow matrix into rectangle 5*8 matrix:" << endl;
    Z.grow(5, 8);
    Z._output();
    cout << endl;
    
}


//makes two default matrixs then use both type functions to access and change the 0s to numbers
void test_matracch(){
    mymatrix<int> A;// using ()
    mymatrix<int> B;// using .at
    
    int u = 0;
    for(int r = 0; r < A.numrows(); r++){
        for( int c = 0; c < A.numcols(r); c++){
           A(r, c) = u;
            u++;
        }
    }
    
    for(int r = 0; r < B.numrows(); r++){
        for( int c = 0; c < B.numcols(r); c++){
           B.at(r, c) = u;
            u++;
        }
    }
    
    cout << "test access and change of matrix: using matrix(a, b):" << endl;
    A._output();
    cout << endl;
  cout << "test access and change of matrix: using matrix.at(a, b):" << endl;
    B._output();
    cout << endl;
}


//makes one numbered matrix and the use copy;
 void test_Mcopy( ){
       mymatrix<int> A(5, 4);
       A.growcols(0, 8);
       A.growcols(1, 7);
       A.growcols(2, 5);
       A.growcols(3, 6);
       A.growcols(4, 5);
     
         int u = 0;
    for(int r = 0; r < A.numrows(); r++){
        for( int c = 0; c < A.numcols(r); c++){
           A(r, c) = u;
            u++;
        }
      
            u = 0;
        
    }
     

     
     cout << "test of matrix copy:" << endl;
     A._output();
     cout << endl;
     
     mymatrix<int> V = A;
     
        cout << "print copy:" << endl;
     V._output();
     cout << endl;
     
     }

//test for scalar multiplication
    void test_Mascalar(){
         mymatrix<int> A(12, 4);
       A.growcols(0, 8);
       A.growcols(1, 7);
       A.growcols(2, 5);
       A.growcols(3, 6);
       A.growcols(4, 5);
     
         int u = 0;
    for(int r = 0; r < A.numrows(); r++){
        for( int c = 0; c < A.numcols(r); c++){
           A(r, c) = u;
            u++;
        }
    }
        
        mymatrix<int> V = A * 2;
        
             cout << "test of matrix scalar multi:x2" << endl;
     A._output();
     cout << endl;
     V._output();
     cout << endl;
    }

//test for matrix multiplication
    void test_Mmulti(){
        
        mymatrix<int> X(2, 3);
        mymatrix<int> Y(3, 4);
        mymatrix<int> Z;
        
        X(0, 0) = 3;
        X(0, 1) = 4;
        X(0, 2) = 1;
        X(1, 0) = 2;
        X(1, 1) = 8;
        X(1, 2) = 5;
        
                 int u = 0;
    for(int r = 0; r < Y.numrows(); r++){
        for( int c = 0; c < Y.numcols(r); c++){
           Y(r, c) = u;
            u++;
        }
    }
        
        Z = X * Y;
        cout << "test for matrix multiplication:" << endl;
        X._output();
        cout << endl;
        Y._output();
        cout << endl << "answer:" << endl;
        Z._output();
        cout << endl;
    }

//main for testing the matrix public functions...
int main(){

    test_matrp(5, 6); //gives a parameterized matrix 5*6

    test_matrd(); // gives a default matrix 
        
    test_growC();//grows specific row by some columns of default matrix
    
    test_matrixG();//grows a matrix upto specific parameters
    
    test_matracch();//makes matrix with elements of numbers counting
    
    test_Mcopy();//copies the matrix into another matrix
    
    test_Mascalar();//test scalar multiplication on matrix
    
    test_Mmulti();//multiplies two square matrices that fits the required parameters
    
    return 0;
}