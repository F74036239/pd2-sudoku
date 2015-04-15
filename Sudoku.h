#include<iostream>
#include<cstdlib>

class Sudoku{
public:
  Sudoku();
  Sudoku(const int init_map[]);
  void setMap(const int set_map[]);
  int getElement(int index);
  bool isCorrect();

  void GiveQuestion();	//output sudoku board
  void ReadIn();		//read inputs
  void Solve();		//solve and output the answer
 
privite:
  bool checkUnity(int arr[]);
  int readin[144];
};
