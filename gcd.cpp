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
