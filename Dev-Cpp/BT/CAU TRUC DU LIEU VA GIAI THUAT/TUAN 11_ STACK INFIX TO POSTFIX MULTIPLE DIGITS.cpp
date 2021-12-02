#include <iostream>
#include <string>
#include <stdlib.h>
#define N 50
using namespace std;

struct STACK
{
	int top;
	char a[N];
	long b[N];
};

void Init(STACK &s)
{
	s.top = 0;
}

bool isEMPTY(STACK s)
{
	if (s.top == 0)
		return true;
	return false;
}

bool isFULL(STACK s)
{
	if (s.top == N)
		return true;
	return false;
}

bool Push1(STACK &s, char x)
{
	if (!isFULL(s))
	{
		s.a[s.top] = x;
		s.top++;
		return true;
	}
	return false;
}

bool Push2(STACK &s, int x)
{
	if (!isFULL(s))
	{
		s.b[s.top] = x;
		s.top++;
		return true;
	}
	return false;
}

char Pop1(STACK &s)
{
	if (!isEMPTY(s))
	{
		s.top--;
		char x = s.a[s.top];
	    return x;
	}
	return NULL;
}

int Pop2(STACK &s)
{
	if (!isEMPTY(s))
	{
		s.top--;
		int x = s.b[s.top];
		return x;
	}
	return NULL;
}

int Priority(char x)
{
	if (x == '*' || x == '/')
		return 2;
	else if (x == '+' || x == '-')
		return 1;
	return 0;
}

string InfixToPostfix(STACK &s, string so)
{
	string str;
	int len = so.length();
	char c;
	for (int i = 0; i < len; i++)
	{
		if (so[i] >= '0' && so[i] <= '9')
        {
            while (isdigit(so[i+1]))
            {
    		    str += so[i];
                i++;
            }
            str += so[i];
            str += ' ';
        }
		else if ((so[i] == '+') || (so[i] == '-') || (so[i] == '*') || (so[i] == '/'))
		{
			while (!isEMPTY(s) && (Priority(so[i]) <= Priority(s.a[s.top-1])))
    		{
    			c = s.a[s.top-1];
    			Pop1(s);
    			str += c;
                str += ' ';
    		}
    		Push1(s, so[i]);
		}
		else if (so[i] == '(')
		{
            if (so[i+1] == '-')
            {
                str += '0';
                str += ' ';
    		    Push1(s, '(');
            }
            else Push1(s, '(');
		}
		else if (so[i] == ')')
		{
    		while (!isEMPTY(s) && s.a[s.top-1] != '(')
    		{
    			c = s.a[s.top-1];
        		Pop1(s);
        		str += c;
                str += ' ';
    		}
    		if (s.a[s.top-1] == '(')
    		{
    			c = s.a[s.top-1];
    			Pop1(s);
    		}
		}
	}
	while (!isEMPTY(s))
	{
		c = s.a[s.top-1];
		Pop1(s);
		str += c;
		str += ' ';
	}
	return str;
}

float Calculate(STACK &s, string so)
{
	string str = InfixToPostfix(s, so);
	int so1, so2;
    string num1;
    int num2;
	int len = str.length();
	for (int i = 0; i < len; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
        {
            while (str[i+1] != ' ')
            {
              num1 += str[i];
              i++;
            }
            num1 += str[i];
            num2 = atoi(num1.c_str());
            Push2(s, num2);
            num1 = ' ';
        }
		else if (str[i] == '+')
		{
    		so1 = s.b[s.top-1];
    		Pop2(s);
    		so2 = s.b[s.top-1];
    		Pop2(s);
    		Push2(s, (so2 + so1));
		}
    	else if (str[i] == '-')
		{
    		so1 = s.b[s.top-1];
    		Pop2(s);
    		so2 = s.b[s.top-1];
    		Pop2(s);
    		Push2(s, (so2 - so1));
		}
		else if (str[i] == '*')
		{
    		so1 = s.b[s.top-1];
    		Pop2(s);
    		so2 =  s.b[s.top-1];
    		Pop2(s);
    		Push2(s, (so2 * so1));
		}
		else if (str[i] == '/')
		{
    		so1 = s.b[s.top-1];
    		Pop2(s);
    		so2 = s.b[s.top-1];
    		Pop2(s);
    		Push2(s, (so2 / so1));
		}
	}
	return s.b[s.top-1];
}

int main()
{
	STACK s1, s2;
	Init(s1);
	Init(s2);
	string so; cin >> so;
  
	cout << InfixToPostfix(s1, so) << endl;
	cout << Calculate(s2, so) << endl;
	return 0;
}                               
