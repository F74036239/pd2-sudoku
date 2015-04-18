#include<iostream>
#include<cstdlib>

class Sudoku{
public:

  void GiveQuestion();	//output sudoku board
  void ReadIn();		//read inputs
  void Solve();		//solve and output the answer

private:
  
  void setElement(int index,int value,int arr[]); 
  bool isCorrect(int arr[]);
  bool checkUnity(int arr[]);
  int getZeroIndex(int arr[]);
  
  void checkNumber_row(int min,int arr[]);
  void checkNumber_col(int min,int arr[]);
  void checkNumber_cell(int min,int arr[]);
  
  bool solve_first();
  bool solve_second(); 
  bool compare();

  int readin[144];
  int ans2[144];
  int canUse_row[9];
  int canUse_col[9];
  int canUse_cell[9];

};
