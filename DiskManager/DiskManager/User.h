#ifndef USER_H_
#define USER_H_
#include "People.h"
#include "Disc.h"
#include "DiscList.h"
#include "Password.h"
class User:public People,public Disc,public DiscList
{
public:
	string userDiscBorrowed[5];
	User(string iname = "null", string iid = "null", string ipassword = "123456") :People(iname, iid, ipassword){
		for (int i = 0; i < 7; i++)
		{
			userDiscBorrowed[i] = "NULL";
		}
	}
	User* next;
	User* getNext() const;
	void setNickame(const string &iname);//设定昵称
	void setPassword(const string &ipassword);//设定密码
	string getNickname() const;//获得昵称
	string getID() const;//获得用户名
	string getPassword();//获得密码
	void setAllBorrowedISBN(string s1, string s2, string s3, string s4, string s5, string s6, string s7, string s8);//设置全部借阅数据ISBN
	void getAllBorrowedISBN(string* &s);//返回借阅书目的数组
	void userDiscDisplay(DiscList &iDisclist);//显示读者借阅信息
	~User();
private:

};

#endif