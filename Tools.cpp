#include<iostream>
#include<string>
using namespace std;
#define max 100
string To_String(int n)
{
  int m = n;
  int i = 0, j = 0;
  char s[max];
  char ss[max];
  while(m > 0)
  {
    s[i++] = m % 10 + '0';
    m /= 10;
  }
  s[i] = '\0';
  
  i = i - 1;
  while(i >= 0)
  {
    ss[j++] = s[i--];
  }
  ss[j] = '\0';
  return ss;
}
