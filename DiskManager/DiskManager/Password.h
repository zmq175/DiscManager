#ifndef PASSWORD_H_
#define PASSWORD_H_
#include <iostream>  
#include<conio.h>  
#include<string>  
using namespace std;
class Password  
{
public:
	Password();//���캯����������Ҫ���ڳ�ʼ�����룬ʹ֮Ϊ��
	Password(string pw);//�����ַ�����������
	void inputPassword();//�������벢����*Ϊ���� 
	string getPassword();//��ȡ��������
	void setPassword(string pw);//��������
private:
	string psw;//���ڴ�������ַ�����  
	int length;//���볤��  
};
#endif