#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int n,a,b,c,d,e,f;

int gcd(int b,int c)
{
  if(b>0)
  {

    d = b;
    b = c%b;
    c = d;

    return gcd(b,c);
  }

  else
  {
    return d;
  }
}


int main()
{

  cin >> n;

  a = n/2;

  if (n%2==0)
  {

    e = a-1;
    f= a+1;

  }

  else
  {
    e = a;
    f = a+1;
  }


  while(gcd(e,f) != 1)
  {
    e--;
    f++;
    gcd(e,f);
  }

  cout << e << " " << f << endl;
  return 0;
}
