#include"Sudoku.h"
#include<cstdlib>
using namespace std;

void Sudoku::GiveQuestion()             //output board
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

  arr[2]=0;arr[4]=0;arr[5]=0;
  arr[0]=0;arr[84]=0;arr[120]=0;
  arr[7]=0;arr[12]=0;arr[16]=0;
  arr[18]=0;arr[19]=0;arr[25]=0;
  arr[28]=0;arr[32]=0;arr[40]=0;
  arr[42]=0;arr[43]=0;arr[47]=0;
  arr[51]=0;arr[55]=0;arr[58]=0;
  arr[63]=0;arr[66]=0;arr[71]=0;
  arr[72]=0;arr[76]=0;arr[81]=0;
  arr[86]=0;arr[88]=0;arr[95]=0;
  arr[96]=0;arr[101]=0;arr[106]=0;
  arr[109]=0;arr[115]=0;arr[117]=0;
  arr[122]=0;arr[128]=0;arr[130]=0;
  arr[133]=0;arr[139]=0;arr[143]=0;

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
  for(int i=0;i<12;i++)
    for(int j=0;j<12;j++)
    {
      cin>>readin[i*12+j];
      ans2[i*12+j]=readin[i*12+j];
    }
}

void Sudoku::setElement(int index,int value,int arr[])
{
  arr[index]=value;
}

int Sudoku::getZeroIndex(int arr[])
{
  for(int i=0;i<144;i++)
    if(arr[i]==0)  
      return i; 
    
  return -1; 
}

void Sudoku::checkNumber_row(int min,int arr[])
{
  int arr_row[9]={0,0,0,0,0,0,0,0,0};
  
  for(int i=0;i<9;i++)
    canUse_row[i]=0;

  for(int i=min;i<(min+12);i++)
    if((arr[i]!=-1)&&(arr[i]!=0))
      ++arr_row[arr[i]-1];
  
  int k=0;
  for(int i=0;i<9;i++)		//row number can be used
    if(arr_row[i]!=1)
    {
      canUse_row[k]=i+1;
      k++;
    }
}

void Sudoku::checkNumber_col(int min,int arr[])
{
  int arr_col[9]={0,0,0,0,0,0,0,0,0};
  
  for(int i=0;i<9;i++)
    canUse_col[i]=0;
  
  for(int i=min;i<(min+132);i+=12)
    if((arr[i]!=-1)&&(arr[i]!=0))
      ++arr_col[arr[i]-1];
  
  int k=0;
  for(int i=0;i<9;i++)		//column number can be used
    if(arr_col[i]!=1)
    {
      canUse_col[k]=i+1;
      k++;
    }
}

void Sudoku::checkNumber_cell(int min,int arr[])
{
  int arr_cell[9]={0,0,0,0,0,0,0,0,0};
  
  for(int i=0;i<9;i++)
    canUse_cell[i]=0;
  
  for(int i=min;i<(min+27);)
  {  
    if((arr[i]!=-1)&&(arr[i]!=0))
      ++arr_cell[arr[i]-1];
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

bool Sudoku::isCorrect(int arr[])
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
      if(arr[i+j]!=-1)
      {
        check_arr[k]=arr[i+j];
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
      if(arr[i+12*j]!=-1)
      {
        check_arr[k]=arr[i+12*j];
        k=k+1;
      }
    }
    check_result=checkUnity(check_arr);
    if(check_result==false) 
      return false;
  }
  
  for(int i=0;i<118;i+=3)	//check cells
  {
    if(arr[i]!=-1)
    {
      check_arr[0]=arr[i];
      check_arr[1]=arr[i+1];
      check_arr[2]=arr[i+2];
      check_arr[3]=arr[i+12];
      check_arr[4]=arr[i+13];
      check_arr[5]=arr[i+14];
      check_arr[6]=arr[i+24];
      check_arr[7]=arr[i+25];
      check_arr[8]=arr[i+26];
    }
    check_result=checkUnity(check_arr);
    if(check_result==false)
      return false;
    if(i==9||i==45||i==81)
      i=i+24;
  }
  return true;
}

bool Sudoku::solve_first()
{
 
    int a = getZeroIndex(readin);    //firstZeroIndex   
    
    if(a==-1)
    {
      if(isCorrect(readin))
 	return true;
 
      else
	return false;
    }  
    else			//have zero
    {
      int num=0;
   
      int row  = (a/12)*12;
      int col  = a%12;
      int cell = a-(col%3)-12*((a/12)%3);
    
      int numCanUse[9]={0,0,0,0,0,0,0,0,0};

      checkNumber_row(row,readin);
      checkNumber_col(col,readin);
      checkNumber_cell(cell,readin);
     
      for(int i=0;i<9;i++)       
        for(int j=0;j<9;j++) 
	  if((canUse_row[i]!=0)&&(canUse_row[i]==canUse_col[j]))
	    for(int k=0;k<9;k++)
	      if((canUse_col[j]!=0)&&(canUse_col[j]==canUse_cell[k]))
	      {
	        numCanUse[num]=canUse_row[i];
	        num++;
	      }
      
      for(int i=0;i<num;i++)
      {  
        setElement(a,numCanUse[i],readin);
	if(solve_first())
          return true;
      }
    }
    readin[a]=0;
    return false;
}

bool Sudoku::solve_second()
{
 
    int a = getZeroIndex(ans2);    //firstZeroIndex   
    
    if(a==-1)
    {
      if(isCorrect(ans2))
 	return true;
 
      else
	return false;
    }  
    else			//have zero
    {
      int num=0;
   
      int row  = (a/12)*12;
      int col  = a%12;
      int cell = a-(col%3)-12*((a/12)%3);
    
      int numCanUse[9]={0,0,0,0,0,0,0,0,0};

      checkNumber_row(row,ans2);
      checkNumber_col(col,ans2);
      checkNumber_cell(cell,ans2);
     
      for(int i=0;i<9;i++)       
        for(int j=0;j<9;j++) 
	  if((canUse_row[i]!=0)&&(canUse_row[i]==canUse_col[j]))
	    for(int k=0;k<9;k++)
	      if((canUse_col[j]!=0)&&(canUse_col[j]==canUse_cell[k]))
	      {
	        numCanUse[num]=canUse_row[i];
	        num++;
	      }
      
      for(int i=num-1;i>=0;i--)
      {  
	setElement(a,numCanUse[i],ans2);
	if(solve_second())
          return true;
       
      }
    }
    ans2[a]=0;
    return false;
}

bool Sudoku::compare()
{
  int same=0;
  
  for(int i=0;i<144;i++)
    if(readin[i]==ans2[i])
      same++;
  
  if(same==144)			//only one solution
    return false;
  
  else
    return true;		//have two solutions
}

void Sudoku::Solve()
{
  if((solve_first()==true)&&(solve_second()==true))
  {  
    if(compare()==true)
      cout<<"2\n";
  
    else if(compare()==false)
    {  
      cout<<"1\n";
      for(int i=0;i<12;i++)
      {
        for(int j=0;j<12;j++)
          cout<<readin[i*12+j]<<" ";
        cout<<endl;
      }
    }  
  }
  else
    cout<<"0\n";
}
