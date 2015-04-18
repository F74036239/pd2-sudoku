#include<iostream>
#include<cstdlib>

class Sudoku{
public:

  void GiveQuestion();	//output sudoku board
  void ReadIn();		//read inputs
//  void Solve();		//solve and output the answer
  bool ssolve();

private:
  
  void setElement(int index,int value); 
  bool isCorrect();
  bool checkUnity(int arr[]);
  
  int getZeroIndex();
  void checkNumber_row(int min);
  void checkNumber_col(int min);
  void checkNumber_cell(int min);

  int readin[144];
  int zeroindex[144];
  int blank;
  int ans2[144];
  int canUse_row[9];
  int canUse_col[9];
  int canUse_cell[9];
};
