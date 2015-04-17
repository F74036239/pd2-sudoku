#include<iostream>
#include<cstdlib>

class Sudoku{
public:

  void GiveQuestion();	//output sudoku board
  void ReadIn();		//read inputs
  void Solve();		//solve and output the answer
 
  void pre_check_row(int min,int max,int (&pre_col)[9]);
private:
  
  void setElement(int index,int value); 
  int getFirstZeroIndex();
  bool isCorrect();
//  void pre_check_col(int min,int max,int (&pre_col)[9]);
  bool checkUnity(int arr[]);
  bool ssolve();
  int readin[144];

};
