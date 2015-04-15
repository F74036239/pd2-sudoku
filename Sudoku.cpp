#include"Sudoku.h"
#include<cstdlib>
using namespace std;

void Sudoku::GiveQuestion()		//output board
{
  //initial board
  int arr[144]={1,2,3,4,5,6,7,8,9,-1,-1,-1,
  	        4,5,6,7,8,9,1,2,3,-1,-1,-1,
  	        7,8,9,1,2,3,4,5,6,-1,-1,-1,
  	        -1,-1,-1,9,7,8,3,1,2,6,4,5, 
  	        -1,-1,-1,3,1,2,6,4,5,9,7,8,
  	        -1,-1,-1,6,4,5,9,7,8,3,1,2,
  	        8,9,7,2,3,1,-1,-1,-1,5,6,4,
  	        2,3,1,5,6,4,-1,-1,-1,8,9,7,
  	        5,6,4,8,9,7,-1,-1,-1,2,3,1, 
  	        9,7,8,-1,-1,-1,2,3,1,4,5,6,
  	        6,4,5,-1,-1,-1,8,9,7,1,2,3,
  	        3,1,2,-1,-1,-1,5,6,4,7,8,9};
  int i;
  int j;
  int k;
  srand((unsigned)time(NULL));
  k=(rand()%6)+1;
  //change one
  if(k==1)
  {  
    for(i=0;i<12;i++)
      for(j=0;j<12;j++)
      {
        if(arr[i*12+j]==-1)
          break;
        switch(arr[i*12+j])
        {
          case 1:arr[i*12+j]=3;break;
          case 2:arr[i*12+j]=4;break;
          case 3:arr[i*12+j]=5;break;
          case 4:arr[i*12+j]=6;break;
          case 5:arr[i*12+j]=7;break;
          case 6:arr[i*12+j]=2;break;
          case 7:arr[i*12+j]=1;break;
	}
      }
  }
  //change two
  if(k==2)
  {
    for(i=0;i<12;i++)
      for(j=0;j<12;j++)
      {
        if(arr[i*12+j]==-1)
          break;
        switch(arr[i*12+j])
        {
          case 4:arr[i*12+j]=8;break;
          case 5:arr[i*12+j]=9;break;
          case 6:arr[i*12+j]=4;break;
          case 7:arr[i*12+j]=5;break;
          case 8:arr[i*12+j]=6;break;
          case 9:arr[i*12+j]=1;break;
          case 1:arr[i*12+j]=7;break;
	}
     }
  }   
  //change three
  if(k==3)
  {
    for(i=0;i<12;i++)
      for(j=0;j<12;j++)
      {
        if(arr[i*12+j]==-1)
          break;
        switch(arr[i*12+j])
        {
          case 1:arr[i*12+j]=7;break;
          case 2:arr[i*12+j]=8;break;
          case 3:arr[i*12+j]=9;break;
          case 4:arr[i*12+j]=2;break;
          case 9:arr[i*12+j]=3;break;
          case 8:arr[i*12+j]=1;break;
          case 7:arr[i*12+j]=4;break;
	}
     }
  }
  //change four
  if(k==4)
  {  
    for(i=0;i<12;i++)
      for(j=0;j<12;j++)
      {
        if(arr[i*12+j]==-1)
          break;
        switch(arr[i*12+j])
        {
          case 1:arr[i*12+j]=5;break;
          case 3:arr[i*12+j]=9;break;
          case 5:arr[i*12+j]=4;break;
          case 7:arr[i*12+j]=1;break;
          case 9:arr[i*12+j]=6;break;
          case 4:arr[i*12+j]=3;break;
          case 6:arr[i*12+j]=7;break;
	}
      }
  }
  //change five
  if(k==5)
  {  
    for(i=0;i<12;i++)
      for(j=0;j<12;j++)
      {
        if(arr[i*12+j]==-1)
          break;
        switch(arr[i*12+j])
        {
          case 2:arr[i*12+j]=9;break;
          case 4:arr[i*12+j]=8;break;
          case 6:arr[i*12+j]=4;break;
          case 8:arr[i*12+j]=5;break;
          case 9:arr[i*12+j]=6;break;
          case 1:arr[i*12+j]=2;break;
          case 5:arr[i*12+j]=1;break;
	}
      }
  }
  //change six
  if(k==6)
  {  
    for(i=0;i<12;i++)
      for(j=0;j<12;j++)
      {
        if(arr[i*12+j]==-1)
          break;
        switch(arr[i*12+j])
        {
          case 7:arr[i*12+j]=6;break;
          case 4:arr[i*12+j]=9;break;
          case 2:arr[i*12+j]=4;break;
          case 5:arr[i*12+j]=8;break;
          case 8:arr[i*12+j]=7;break;
          case 9:arr[i*12+j]=2;break;
          case 6:arr[i*12+j]=5;break;
	}
      }
  }
  //put blank
  arr[3]=0;arr[7]=0;arr[14]=0;arr[15]=0;
  arr[20]=0;arr[24]=0;arr[29]=0;arr[39]=0;
  arr[42]=0;arr[42]=0;arr[42]=0;arr[42]=0;
  arr[46]=0;arr[53]=0;arr[59]=0;arr[66]=0;
  arr[72]=0;arr[82]=0;arr[86]=0;arr[94]=0;
  arr[100]=0;arr[105]=0;arr[116]=0;arr[120]=0;
  arr[127]=0;arr[133]=0;arr[140]=0;arr[143]=0;
  //print out
  for(i=0;i<12;i++)
  {
    for(j=0;j<12;j++) 
      cout<<arr[i*12+j]<<" ";
    cout<<endl;
  }
} 

void Sudoku::ReadIn()   //read inputs
{
  int i;
  int j;
  
  for(i=0;i<12;i++)
    for(j=0;j<12;j++)
      cin>>readin[i*12+j];
}


bool Sudoku::checkUnity()
{
  int arr_unity[9];	//counters
  
  for(int i=0;i<9;i++)
    arr_unity[i]=0;	//initialize

  for(int i=0;i<12;i++)
  {	
    if (ans[i]==-1)
      break;
    ++arr_unity[ans[i]-1]; //count
  }
  for(int i=0;i<9;i++)
  {  
    if(arr_unity[i]!=1)
      return false;
      
    return true;
  }
}

bool Sudoku::isCorrect()
{
  bool check_result;
  int check_arr[9];
  int location;
  for(int i=0;i<144;i+=12)	//check rows
  {
    for(j=0;j<12;j++)
    {
      if(readin[i+j]==-1)
        break;
      check_arr[j]=readin[i+j];
    }
    check_result=checkUnity(check_arr);
    if(check_result==false)
      return false;
  }
  for(int i=0;i<12;i++)		//check columns
  {
    for(int j=0;j<12;j++)
      check_arr[j]=readin[i+9*j];
    check_result=checkUnity(check_arr);
    if(check_result==false)
      return false;
  }
  for(int i=0;i<9;i++)		//check cells
  {
    for(int j=0;j<9;j++)
    {
      location =27*(i/3)+3*(i%3)+9*(j/3)+(j%3);
      check_arr[j]=readin[location];
    }
    check_result=checkUnity(check_arr);
    if(check_result==false)
      return false;
  }
  return true;
}

void Sudoku::Solve()            //solve and output the answer
{
  int k;			//how many solutions
  int firstZero;
  firstZero = .getFirstZeroIndex();
  if(firstZero==-1)
  {
    if(.isCorrect())
    {
      answer = question;
      return true;
    }
    else
      return false;
  }
  else
  {
    for(int num=1;;num<=9;num++)
    {
      .setElement(firstZero,num)
      if(solve(question,answer))
        return true;
    }
    return false;
  } 
  cout<<k<<endl;		//output how many solutions and the answer
  
  for(int i=0;i<12;i++)
  {
    for(int j=0;j<12;j++)
      cout<<arr[i*12+j]<<" ";
    cout<<endl;
  }
}      
      
