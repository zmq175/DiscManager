#ifndef PEOPLE_H_
#define PEOPLE_H_
#include <string>
#include "Password.h"
using namespace std;
class People
{
public:
	People(string iname, string iid,string ipw) :nickname(iname), id(iid),pw(ipw){}
	void setNickname(string iname);//修改昵称
	void setPassword(string ipw);//修改密码
	void show();//输出
	~People(){}

protected:
	string nickname;//昵称
	string id;//用户名
	Password pw;
};

#endif