#ifndef PEOPLE_H_
#define PEOPLE_H_
#include <string>
#include "Password.h"
using namespace std;
class People
{
public:
	People(string iname, string iid,string ipw) :nickname(iname), id(iid),pw(ipw){}
	void setNickname(string iname);//�޸��ǳ�
	void setPassword(string ipw);//�޸�����
	void show();//���
	~People(){}

protected:
	string nickname;//�ǳ�
	string id;//�û���
	Password pw;
};

#endif