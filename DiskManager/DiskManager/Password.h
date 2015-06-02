#ifndef PASSWORD_H_
#define PASSWORD_H_
#include <iostream>  
#include<conio.h>  
#include<string>  
using namespace std;
class Password  
{
public:
	Password();//构造函数，这里主要用于初始化密码，使之为空
	Password(string pw);//根据字符串创建密码
	void inputPassword();//用于输入并回显*为密码 
	string getPassword();//获取密码内容
	void setPassword(string pw);//设置密码
private:
	string psw;//用于存密码的字符串；  
	int length;//密码长度  
};
#endif