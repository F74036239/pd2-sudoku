#include"Sudoku.h"
#include<cstdlib>
using namespace std;

void Sudoku::GiveQuestion()
{}

void Sudoku::ReadIn()   //read inputs
{
  for(int i=0;i<12;i++)
    for(int j=0;j<12;j++)
    {
      cin>>readin[i*12+j];
      ans2[i*12+j]=readin[i*12+j];
    }
}

void Sudoku::setElement(int index,int value)
{
  readin[index]=value;
}

int Sudoku::getZeroIndex()
{
  for(int i=0;i<144;i++)
    if(readin[i]==0)  
      return i; 
    
  return -1; 
}
void Sudoku::checkNumber_row(int min)
{
  int arr_row[9]={0,0,0,0,0,0,0,0,0};
  
  for(int i=0;i<9;i++)
    canUse_row[i]=0;

  for(int i=min;i<(min+12);i++)
    if((readin[i]!=-1)&&(readin[i]!=0))
      ++arr_row[readin[i]-1];
  
  int k=0;
  for(int i=0;i<9;i++)		//row number can be used
    if(arr_row[i]!=1)
    {
      canUse_row[k]=i+1;
      k++;
    }
}
void Sudoku::checkNumber_col(int min)
{
  int arr_col[9]={0,0,0,0,0,0,0,0,0};
  
  for(int i=0;i<9;i++)
    canUse_col[i]=0;
  
  for(int i=min;i<(min+132);i+=12)
    if((readin[i]!=-1)&&(readin[i]!=0))
      ++arr_col[readin[i]-1];
  
  int k=0;
  for(int i=0;i<9;i++)		//column number can be used
    if(arr_col[i]!=1)
    {
      canUse_col[k]=i+1;
      k++;
    }
}

void Sudoku::checkNumber_cell(int min)
{
  int arr_cell[9]={0,0,0,0,0,0,0,0,0};
  
  for(int i=0;i<9;i++)
    canUse_cell[i]=0;
  
  for(int i=min;i<(min+27);)
  {  
    if((readin[i]!=-1)&&(readin[i]!=0))
      ++arr_cell[readin[i]-1];
    if((i%3)<2)i++;
    if((i%3)==2)i=i+10;
  }
  
  int k=0;
  for(int i=0;i<9;i++)		//cell number can be used
    if(arr_cell[i]!=1)
    {
      canUse_cell[k]=i+1;
      k++;
    }
}

bool Sudoku::checkUnity(int ans[])
{
  int arr_unity[9]={0,0,0,0,0,0,0,0,0};	//counters

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
 
    int a = getZeroIndex();    //firstZeroIndex   
    
    if(a==-1)
    {
      if(isCorrect())
      {
        cout<<"1\n";
	return true;
      }
      else
      {
        cout<<"0\n";
	return false;
      }
    }  
    else			//have zero
    {
      int num=0;
   
      int row  = (a/12)*12;
      int col  = a%12;
      int cell = a-(col%3)-12*((a/12)%3);
    
      int numCanUse[9]={0,0,0,0,0,0,0,0,0};

      checkNumber_row(row);
      checkNumber_col(col);
      checkNumber_cell(cell);
     
      for(int i=0;i<9;i++)       
        for(int j=0;j<9;j++) 
	  if((canUse_row[i]!=0)&&(canUse_row[i]==canUse_col[j]))
	    for(int k=0;k<9;k++)
	      if((canUse_col[j]!=0)&&(canUse_col[j]==canUse_cell[k]))
	      {
	        numCanUse[num]=canUse_row[i];
	        num++;
	      }
      
      for(int i=0;i<9;i++)
        cout<<numCanUse[i];
      
      for(int i=0;i<num;i++)
      {  
        setElement(a,numCanUse[i]);
        cout<<"number: "<<a<<"value"<<numCanUse[i]<<endl;
	if(ssolve())
          return true;
      }
    }
    readin[a]=0;
    cout<<"-1\n";
    return false;
}  
