#include <iostream>
#include <vector>
#include<string.h>
using namespace std;
vector<int> a;
char input[1010],zero[2]="0";
void ch_to_vec(char *b)
{
  for (int i = 0; b[i] != '\0'; i++)
  {
    b[i] -= '0';
    a.push_back(b[i]);
  }
}

int isM11(vector<int> b)
{ // is multiple 11
  int sumOdd = 0, SumEven = 0;
  for (int i = 0; i < b.size(); i += 2)
  {
    sumOdd += b[i];
  }
  for (int i = 1; i < b.size(); i += 2)
  {
    SumEven += b[i];
  }
  cout<<"even="<<SumEven<<" odd="<<sumOdd<<endl;
  if ((!((sumOdd - SumEven)%11)||(!(sumOdd - SumEven))))
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void p_org(vector<int> b)
{ // print_origin
  for (int i = 0; i < b.size(); i++)
  {
    cout << b[i];
  }
}
int main()
{

  while (cin >> input)
  {// cin char
    if(strcmp(input,zero)==0) break;
    ch_to_vec(input);
    if (isM11(a))
    {
      p_org(a);
      cout << " is a multiple of 11." << endl;
    }
    else if (!isM11(a))
    {
      p_org(a);
      cout << " is not a multiple of 11." << endl;
    }
    

    a.clear();
  }

  return 0;
}
