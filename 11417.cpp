#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int GCD(int a, int b)
{ // greatest common divisor
  int max;
  if (a == 1 && b == 1)
  {
    max = 1;
  }
  else
  {
    for (int i = 2; i <= min(a, b); i++)
    {
      if (a % i == 0 && b % i == 0)
      {
        max = i;
      }
    }
  }

  return max;
}
int main()
{
  int N = 10,G;
  int T = 0;

  G=0;
  for (int i = 1; i < N; i++)
  {
    for (int j = i + 1; j <= N; j++)
    {
      cout<<G;
      G += GCD(i, j);
      T += __gcd(i, j);
      cout <<"my="<< GCD(i, j) << " fun=" << __gcd(i, j)<<endl;

       cout<<"G="<<G<<" T="<<T<<endl;
    }
  }

  //cout << GCD(1, 1) << " " << __gcd(1, 1);

  return 0;
}