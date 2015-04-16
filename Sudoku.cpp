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
        if(arr[i*12+j]!=-1)
        { 
          switch(arr[i*12+j])
          {
            case 1:arr[i*12+j]=6;break;
            case 2:arr[i*12+j]=4;break;
            case 3:arr[i*12+j]=5;break;
            case 4:arr[i*12+j]=2;break;
            case 5:arr[i*12+j]=3;break;
            case 6:arr[i*12+j]=1;break;
	  }
        }
      }
  }
  //change two
  if(k==2)
  {
    for(i=0;i<12;i++)
      for(j=0;j<12;j++)
      {
        if(arr[i*12+j]!=-1)
        {
          switch(arr[i*12+j])
          {
            case 4:arr[i*12+j]=8;break;
            case 5:arr[i*12+j]=9;break;
            case 6:arr[i*12+j]=7;break;
            case 7:arr[i*12+j]=6;break;
            case 8:arr[i*12+j]=4;break;
            case 9:arr[i*12+j]=5;break;
	  }
        }
     }
  }   
  //change three
  if(k==3)
  {
    for(i=0;i<12;i++)
      for(j=0;j<12;j++)
      {
        if(arr[i*12+j]!=-1)
        {
          switch(arr[i*12+j])
          {
            case 1:arr[i*12+j]=8;break;
            case 2:arr[i*12+j]=4;break;
            case 3:arr[i*12+j]=9;break;
            case 4:arr[i*12+j]=2;break;
            case 9:arr[i*12+j]=3;break;
            case 8:arr[i*12+j]=1;break;
	  }
       }
     }
  }
  //change four
  if(k==4)
  {  
    for(i=0;i<12;i++)
      for(j=0;j<12;j++)
      {
        if(arr[i*12+j]!=-1)
        {
          switch(arr[i*12+j])
          {
            case 1:arr[i*12+j]=5;break;
            case 3:arr[i*12+j]=6;break;
            case 5:arr[i*12+j]=1;break;
            case 6:arr[i*12+j]=3;break;
            case 7:arr[i*12+j]=9;break;
            case 9:arr[i*12+j]=7;break;
	  }
        }
      }
  }
  //change five
  if(k==5)
  {  
    for(i=0;i<12;i++)
      for(j=0;j<12;j++)
      {
        if(arr[i*12+j]!=-1)
        {
          switch(arr[i*12+j])
          {
            case 1:arr[i*12+j]=9;break;
            case 2:arr[i*12+j]=8;break;
            case 4:arr[i*12+j]=6;break;
            case 6:arr[i*12+j]=4;break;
            case 8:arr[i*12+j]=2;break;
            case 9:arr[i*12+j]=1;break;
	  }
        }
      }
  }
  //change six
  if(k==6)
  {  
    for(i=0;i<12;i++)
      for(j=0;j<12;j++)
      {
        if(arr[i*12+j]!=-1)
        {
          switch(arr[i*12+j])
          {
            case 2:arr[i*12+j]=6;break;
            case 4:arr[i*12+j]=5;break;
            case 5:arr[i*12+j]=4;break;
            case 6:arr[i*12+j]=2;break;
            case 7:arr[i*12+j]=8;break;
            case 8:arr[i*12+j]=7;break;
	  }
        }
      }
  }
  
  //put blank
  /*
  arr[2]=0;arr[16]=0;arr[31]=0;
  arr[51]=0;arr[42]=0;arr[69]=0;
  arr[72]=0;arr[87]=0;arr[107]=0;
  arr[121]=0;arr[138]=0;arr[117]=0;
  arr[13]=0;arr[65]=0;arr[100]=0;
  arr[134]=0;arr[127]=0;arr[143]=0;
  */
  //print out
  for(i=0;i<12;i++)
  {
    for(j=0;j<12;j++) 
      cout<<arr[i*12+j]<<" ";
    cout<<endl;
  }
} 
/*********************************************/

void Sudoku::ReadIn()   //read inputs
{
  for(int i=0;i<12;i++)
    for(int j=0;j<12;j++)
      cin>>readin[i*12+j];
}

void Sudoku::setElement(int index,int value)
{
  readin[index]=value;
}

int Sudoku::getFirstZeroIndex()
{
  int k=0;
  for(int i=0;i<144;i++)
  {
    if(readin[i]==0)
      return i;
  }
    return -1;
}

bool Sudoku::checkUnity(int ans[])
{
  int arr_unity[9];	//counters
  
  for(int i=0;i<9;i++)
    arr_unity[i]=0;	//initialize

  for(int i=0;i<9;i++)
    ++arr_unity[ans[i]-1]; //count
  
  for(int i=0;i<9;i++) 
    if(arr_unity[i]!=1)
      return false;
  
  return true;
}

bool Sudoku::isCorrect()
{
  bool check_result;
  int check_arr[9];
  int location;
  int k;
  int p;
  int n;

  for(int i=0;i<144;i+=12)	//check rows
  {
    k=0;
    for(int j=0;j<12;j++)
    {
      if(readin[i+j]!=-1)
      {
        check_arr[k]=readin[i+j];
        k=k+1;
      }
    }
    check_result=checkUnity(check_arr);
    if(check_result==false)
      return false;
  }
  
  for(int i=0;i<12;i++)		//check columns
  {
    k=0;
    for(int j=0;j<12;j++)
    {  
      if(readin[i+12*j]!=-1)
      {
        check_arr[k]=readin[i+12*j];
        k=k+1;
      }
    }
    check_result=checkUnity(check_arr);
    if(check_result==false) 
      return false;
  }
  
  for(int i=0;i<118;i+=3)	//check cells
  {
    if(readin[i]!=-1)
    {
      check_arr[0]=readin[i];
      check_arr[1]=readin[i+1];
      check_arr[2]=readin[i+2];
      check_arr[3]=readin[i+12];
      check_arr[4]=readin[i+13];
      check_arr[5]=readin[i+14];
      check_arr[6]=readin[i+24];
      check_arr[7]=readin[i+25];
      check_arr[8]=readin[i+26];
    }
    check_result=checkUnity(check_arr);
    if(check_result==false)
      return false;
    if(i==9||i==45||i==81)
      i=i+24;
  }
  return true;
}

bool Sudoku::ssolve()
{
  int firstZero;
  firstZero=getFirstZeroIndex();
  if(firstZero==-1)
  {
    if(isCorrect())
    {
      cout<<"no zero & correct\n";
      
      cout<<"1\n";
      for(int i=0;i<12;i++)
      {
        for(int j=0;j<12;j++)
          cout<<readin[i*12+j]<<" ";
        cout<<endl;
      }
      
      return true;
    }
    else
    {
      cout<<"no zero but wrong\n";
      
      cout<<"1\n";
      for(int i=0;i<12;i++)
      {
        for(int j=0;j<12;j++)
          cout<<readin[i*12+j]<<" ";
        cout<<endl;
      }
    }  
    return false;
  }
  else
  {
    cout<<"have zero\n";
    for(int num=1;num<=9;num++)
    {
      setElement(firstZero,num);
      cout<<"number: "<<firstZero<<endl;
      cout<<"value:"<<readin[firstZero]<<endl;
      
      if(ssolve())
      { 
        cout<<"have zero correct\n";  
	return true;
      }
    }
    cout<<"have zero wrong\n";
    return false;
  }
}  

void Sudoku::Solve()            //solve and output the answer
{
  if(ssolve()==true)
  {  
    cout<<"1\n";
    for(int i=0;i<12;i++)
    {
      for(int j=0;j<12;j++)
        cout<<readin[i*12+j]<<" ";
      cout<<endl;
    }
  
  }
  else
    cout<<"0\n";

}  
