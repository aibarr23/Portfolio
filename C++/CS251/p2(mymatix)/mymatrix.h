
/*mymatrix.h*/

// 
// << ANTHONY IBARRA >>
// U. of Illinois, Chicago
// CS 251: Spring 2020
// Project #02
//

//
// mymatrix
//
// The mymatrix class provides a matrix (2D array) abstraction.
// The size can grow dynamically in both directions (rows and 
// cols).  Also, rows can be "jagged" --- i.e. rows can have 
// different column sizes, and thus the matrix is not necessarily 
// rectangular.  All elements are initialized to the default value
// for the given type T.  Example:
//
//   mymatrix<int>  M;  // 4x4 matrix, initialized to 0
//   
//   M(0, 0) = 123;
//   M(1, 1) = 456;
//   M(2, 2) = 789;
//   M(3, 3) = -99;
//
//   M.growcols(1, 8);  // increase # of cols in row 1 to 8
//
//   for (int r = 0; r < M.numrows(); ++r)
//   {
//      for (int c = 0; c < M.numcols(r); ++c)
//         cout << M(r, c) << " ";
//      cout << endl;
//   }
//
// Output:
//   123 0 0 0
//   0 456 0 0 0 0 0 0
//   0 0 789 0
//   0 0 0 -99
//

#pragma once

#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

template<typename T>
class mymatrix
{
private:
  struct ROW
  {
    T*  Cols;     // dynamic array of column elements
    int NumCols;  // total # of columns (0..NumCols-1)
  };

  ROW* Rows;     // dynamic array of ROWs
  int  NumRows;  // total # of rows (0..NumRows-1)

public:
  //
  // default constructor:
  //
  // Called automatically by C++ to construct a 4x4 matrix.  All 
  // elements are initialized to the default value of T.
  //
  mymatrix()
  {
    Rows = new ROW[4];  // an array with 4 ROW structs:
    NumRows = 4;

    // initialize each row to have 4 columns:
    for (int r = 0; r < NumRows; ++r)
    {
      Rows[r].Cols = new T[4];  // an array with 4 elements of type T:
      Rows[r].NumCols = 4;

      // initialize the elements to their default value:
      for (int c = 0; c < Rows[r].NumCols; ++c)
      {
        Rows[r].Cols[c] = T{};  // default value for type T:
      }
    }
  }

  //
  // parameterized constructor:
  //
  // Called automatically by C++ to construct a matrix with R rows, 
  // where each row has C columns. All elements are initialized to 
  // the default value of T.
  //
  mymatrix(int R, int C)
  {
    if (R < 1)
      {
      throw invalid_argument("mymatrix::constructor: # of rows");
      }
      
    if (C < 1)
      {
      throw invalid_argument("mymatrix::constructor: # of cols");
      }
    

    //
    // TODO
    //
  
  
    Rows = new ROW[R];  // an array with R ROW structs:
    NumRows = R;

    // initialize each row to have C columns:
    for (int r = 0; r < NumRows; ++r)
    {
      Rows[r].Cols = new T[C];  // an array with R*C elements of type T:
      Rows[r].NumCols = C;

      // initialize the elements to their default value:
      for (int c = 0; c < Rows[r].NumCols; ++c)
      {
        Rows[r].Cols[c] = T{};  // default value for type T:
      }
    }
  
  
  }


  //
  // copy constructor:
  //
  // Called automatically by C++ to construct a matrix that contains a 
  // copy of an existing matrix.  Example: this occurs when passing 
  // mymatrix as a parameter by value
  //
  //   void somefunction(mymatrix<int> M2)  <--- M2 is a copy:
  //   { ... }
  //
  mymatrix(const mymatrix<T>& other)
  {
    //
    // TODO
    //

   
    this->NumRows = other.NumRows;
      
    this-> Rows = other.Rows;//makes each row of the copy same as the rows of the one being copied from
     

}

  //
  // numrows
  //
  // Returns the # of rows in the matrix.  The indices for these rows
  // are 0..numrows-1.
  //
  int numrows() const
  {
    //
    // TODO
    //

int o = NumRows;// makes int o equal number of row in given matrix

    return o;
  }
  

  //
  // numcols
  //
  // Returns the # of columns in row r.  The indices for these columns
  // are 0..numcols-1.  Note that the # of columns can be different 
  // row-by-row since "jagged" rows are supported --- matrices are not
  // necessarily rectangular.
  //
  int numcols(int r) const
  {
    if (r < 0 || r >= NumRows)
      throw invalid_argument("mymatrix::numcols: row");

    //
    // TODO
    //

    int o = Rows[r].NumCols;// makes int o equal to number of col in row r
                            // of matrix given
    return o;
  }


  //
  // growcols
  //
  // Grows the # of columns in row r to at least C.  If row r contains 
  // fewer than C columns, then columns are added; the existing elements
  // are retained and new locations are initialized to the default value 
  // for T.  If row r has C or more columns, then all existing columns
  // are retained -- we never reduce the # of columns.
  //
  // Jagged rows are supported, i.e. different rows may have different
  // column capacities -- matrices are not necessarily rectangular.
  //
  void growcols(int r, int C)
  {
    if (r < 0 || r >= NumRows)
      throw invalid_argument("mymatrix::growcols: row");
    if (C < 1)
      throw invalid_argument("mymatrix::growcols: columns");

    //
    // TODO:
    //
  

      
      if(C <= Rows[r].NumCols){
    return;
    }
      
      T* newRow = new T[Rows[r].NumCols + C];//makes a new set of columns for that new row
      
      for(int i = 0; i < Rows[r].NumCols; ++i){//makes each column on that row have same value of previous matrix withouth any growth
    
    newRow[i] = Rows[r].Cols[i];
    
    }
    
    for(int i = Rows[r].NumCols; i < C ;++i){//gives elements with  no previous value the default value
    
        newRow[i] = T{};
    
    }
      
    Rows[r].Cols = newRow;//puts that new "grown" row into the row that is given to grow 
    Rows[r].NumCols = C;
      
            
    }

  //
  // grow
  //
  // Grows the size of the matrix so that it contains at least R rows,
  // and every row contains at least C columns.
  // 
  // If the matrix contains fewer than R rows, then rows are added
  // to the matrix; each new row will have C columns initialized to 
  // the default value of T.  If R <= numrows(), then all existing
  // rows are retained -- we never reduce the # of rows.
  //
  // If any row contains fewer than C columns, then columns are added
  // to increase the # of columns to C; existing values are retained
  // and additional columns are initialized to the default value of T.
  // If C <= numcols(r) for any row r, then all existing columns are
  // retained -- we never reduce the # of columns.
  // 
  void grow(int R, int C)  {
  mymatrix<int> saveM(R, C);//matrix of expected gown size
  
    if (R < 1)
      throw invalid_argument("mymatrix::grow: # of rows");
    if (C < 1)
      throw invalid_argument("mymatrix::grow: # of cols");

    //
    // TODO:
    //
    
    //checks if the values given correspond to the matrix 
      if(R < NumRows){
    return;
    }
    
   for(int r = 0; r < NumRows; r++){
         if(C < Rows[r].NumCols){
    return;
        }

    }
  //copies stored elements of soon to grow matrix into saveM
  for(int r = 0; r < NumRows; r++){
  
      for(int c = 0; c < Rows[r].NumCols; c++){
      saveM(r, c) = Rows[r].Cols[c];
      }
  
  }

// rebuilds soon to grow matrix to fit growth size
    Rows = new ROW[R];
    NumRows = R;
    
  for (int r = 0; r < R; r++){
    

       Rows[r].Cols = new T[C];  // an array with C elements of type T:
       Rows[r].NumCols = C;
      
         for (int c = 0 ; c < C; ++c){
           
            Rows[r].Cols[c] = T{};  // default value for type T:
          }
      
     }
     
     //copies the values saved in saveM to the rebuilt matrix
  for(int r = 0; r < R; r++){
  
      for(int c = 0; c < Rows[r].NumCols; c++){
      Rows[r].Cols[c] = saveM(r, c);
      }
  
  } 
 
  
  }


  //
  // size
  //
  // Returns the total # of elements in the matrix.
  //
  int size() const
  {
    //
    // TODO
    //

    int o = 0;
    
    for(int r = 0; r < numrows(); ++r){
    
    int c = numcols(r);
    o = o + c;
    
    }

    return o;
  }


  //
  // at
  //
  // Returns a reference to the element at location (r, c); this
  // allows you to access the element or change it:
  //
  //    M.at(r, c) = ...
  //    cout << M.at(r, c) << endl;
  //
  T& at(int r, int c)
  {
    if (r < 0 || r >= NumRows)
      throw invalid_argument("mymatrix::at: row");
    if (c < 0 || c >= Rows[r].NumCols)
      throw invalid_argument("mymatrix::at: col");

    //
    // TODO
    //

   // T temp = {};  // we need to return something, so a temp for now:

    return Rows[r].Cols[c];
  }


  //
  // ()
  //
  // Returns a reference to the element at location (r, c); this
  // allows you to access the element or change it:
  //
  //    M(r, c) = ...
  //    cout << M(r, c) << endl;
  //
  T& operator()(int r, int c)
  {
    if (r < 0 || r >= NumRows)
      throw invalid_argument("mymatrix::(): row");
    if (c < 0 || c >= Rows[r].NumCols)
      throw invalid_argument("mymatrix::(): col");

    //
    // TODO
    //

   // T temp = {};  // we need to return something, so a temp for now:

    return Rows[r].Cols[c];
  }

  //
  // scalar multiplication
  //
  // Multiplies every element of this matrix by the given scalar value,
  // producing a new matrix that is returned.  "This" matrix is not
  // changed.
  //
  // Example:  M2 = M1 * 2;
  //
  mymatrix<T> operator*(T scalar)
  {
    mymatrix<T> result(NumRows, 1);//matrix for answer with same #rows and least #cols to be able to grow if needed

    //
    // TODO
    //
    
    //grows columns to match operator
    for(int r = 0; r < numrows(); r++){
        result.growcols(r, numcols(r));
        
    }
        //muliplies by scalar to each element of answer matrix 
    for(int r = 0; r < numrows(); r++){
        for( int c = 0; c < numcols(r); c++){
          result(r, c) =  Rows[r].Cols[c] * scalar;
        }
    }

    
    
    return result;
  }


  //
  // matrix multiplication
  //
  // Performs matrix multiplication M1 * M2, where M1 is "this" matrix and
  // M2 is the "other" matrix.  This produces a new matrix, which is returned.
  // "This" matrix is not changed, and neither is the "other" matrix.
  //
  // Example:  M3 = M1 * M2;
  //
  // NOTE: M1 and M2 must be rectangular, if not an exception is thrown.  In
  // addition, the sizes of M1 and M2 must be compatible in the following sense:
  // M1 must be of size RxN and M2 must be of size NxC.  In this case, matrix
  // multiplication can be performed, and the resulting matrix is of size RxC.
  //
  mymatrix<T> operator*(const mymatrix<T>& other)
  {
    mymatrix<T> result(NumRows, other.numcols(0));//matrix with expected size of final answer
mymatrix<T> subother = other;// matrix that can be changed due to not being const. thus being able to use its elements 
    //
    // both matrices must be rectangular for this to work:
    //

    //
    // TODO
    //
    for(int r = 1; r < NumRows; r++){
    
        if (Rows[r-1].NumCols != Rows[r].NumCols)
           throw runtime_error("mymatrix::*: this not rectangular");

        //

         if (other.numcols(r-1) != other.numcols(r))
           throw runtime_error("mymatrix::*: other not rectangular");

    }
    //
    // Okay, both matrices are rectangular.  Can we multiply?  Only
    // if M1 is R1xN and M2 is NxC2.  This yields a result that is
    // R1xC2.
    // 
    // Example: 3x4 * 4x2 => 3x2
    //

    //
    // TODO
    //
     if (Rows[0].NumCols != other.numrows())
       throw runtime_error("mymatrix::*: size mismatch");

    //
    // Okay, we can multiply:
    //

    //
    // TODO
    //


//does the process of matrix multiplication of two matrices finding each element one by one of result 
    for(int r = 0; r < result.NumRows; r++){
        
        for(int c = 0; c < result.numcols(r); c++){
        
            int value = 0;
            
            for(int digit = 0; digit < Rows[0].NumCols; digit++){//does the matrix multiplication and adding of the process
            
            int subvalue = 0;
            
                subvalue = Rows[r].Cols[digit] * subother(digit, c);
                value = value + subvalue;
            }
            
            result(r, c) = value;
        }
    }
    
    

    return result;
  }


  //
  // _output
  //
  // Outputs the contents of the matrix; for debugging purposes.
  //
  void _output()
  {
    for (int r = 0; r < this->NumRows; ++r)
    {
      for (int c = 0; c < this->Rows[r].NumCols; ++c)
      {
        cout << this->Rows[r].Cols[c] << " ";
      }
      cout << endl;
    }
  }

};
