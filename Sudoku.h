#include<iostream>
#include<cstdlib>

class Sudoku{
public:

  void GiveQuestion();	//output sudoku board
  void ReadIn();		//read inputs
  void Solve();		//solve and output the answer
 
  void chooseZeroIndex();
private:
  
  void setElement(int index,int value); 
  void getFirstZeroIndex_I();
  int getFirstZeroIndex_II();
  bool isCorrect();
  void pre_check_row(int min,int max,int (&pre_row)[144]);
//  void chooseZeroIndex();
  bool checkUnity(int arr[]);
  bool ssolve();
  
  int readin[144];
  int answer[144];
  int pre_row[144];
  int zeroIndex[144];
};
