#include "Password.h"
using namespace std;
Password::Password()//���캯����������Ҫ���ڳ�ʼ�����룬ʹ֮Ϊ��  
{
	psw = "";//��ʼ������Ϊ��"";  
	length = 0; //��ʼ�����볤��  
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
void Password::inputPassword()//�������벢����*Ϊ����  
{
	char temp_c;
	cout << "please input password:";
	while (true)
	{
		temp_c = _getch();  //����һ���ַ�  
		if (temp_c != char(13))  //�жϸ��ַ��ǲ�Ϊ�س�����������˳�while  
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
				psw += temp_c;//�����ַ�����  
				length++;
				break;
			}
		}
		else break;
	}
}
string Password::getPassword()//����һ�������ַ��� 
{
	return psw;
}