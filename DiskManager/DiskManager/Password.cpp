#include "Password.h"
using namespace std;
Password::Password()//构造函数，这里主要用于初始化密码，使之为空  
{
	psw = "";//初始化密码为空"";  
	length = 0; //初始化密码长度  
}
Password::Password(string pw)
{
	psw = pw;
	length = pw.length();
}
void Password::setPassword(string pw)
{
	psw = pw;
	length = pw.length();
}
void Password::inputPassword()//用于输入并回显*为密码  
{
	char temp_c;
	cout << "please input password:";
	while (true)
	{
		temp_c = _getch();  //输入一个字符  
		if (temp_c != char(13))  //判断该字符是不为回车，如果是则退出while  
		{
			switch (temp_c)
			{
			case 8:
				if (length != 0)
				{
					cout << "/b /b";
					psw = psw.substr(0, length - 1);
					length--;
				}
				else;
				break;
			default:
				cout << "*";  
				psw += temp_c;//连成字符串；  
				length++;
				break;
			}
		}
		else break;
	}
}
string Password::getPassword()//返回一个密码字符串 
{
	return psw;
}