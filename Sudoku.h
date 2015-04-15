#include<iostream>
#include<cstdlib>

class Sudoku{
public:

  void GiveQuestion();	//output sudoku board
  void ReadIn();		//read inputs
  void Solve();		//solve and output the answer
 
privite:
  
  void setElement(int index,int value); 
  int getFirstZeroIndex();
  bool isCorrect();
  bool checkUnity(int arr[]);
  bool ssolve();
  int readin[144];
};
