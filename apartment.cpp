#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
long long int n,k,a,b;

  cin >> n >> k ;

if(k==0 || n == k)
{
  cout << 0 << " " << 0 << endl;
}
else
{
  if (k==1)
  {
    if (n==2)
    {
      cout << 1 << " "<< 1 << endl;
    }
    else
    {
      cout << 1 << " "<< 2 << endl;
    }
  }

  else
  {
    a = n-k ;
    if(n%2==0)
    {
      b = 2*k ;
    }
    else
    {
      b = (2*k);
    }

    if(b>a)
    {
      cout << 1 << " " << a << endl;;
    }

    else
    {
      cout << 1 << " " << b << endl;
    }
  }


}

  return 0;
}
