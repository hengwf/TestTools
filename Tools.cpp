#include<iostream>
#include<string>
using namespace std;
#define max 100


#define IS_DIGIT(_arg_)	({				\
	 	char _ch_ = _arg_;				\
		(_ch_ >= '0' && _ch_ <= '9');	\
	 })	

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

int myatoi(const char *str)
{
	int integer = 0;
	const char * p = str;
	int flag = 1;

	switch (*p) {
	case '+':
		p ++;
		break;
	case '-':
		flag = -1;
		p ++;
		break;
	default:
		break;
	}

	for (; '\0' != *p && IS_DIGIT(*p); p ++) {
		integer *= 10;
		integer += *p - '0';
	}
	
	return flag > 0 ? integer : -integer;
}



int main()
{

  cout << " string is " << To_String(123456789).c_str() << endl;
  cout << myatoi("-12345678") << endl;
  return 0;
}