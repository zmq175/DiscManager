#include <iostream>
#include "User.h"
using namespace std;
User* User::getNext() const
{
	return next;
}
void User::setNickame(const string &iname)
{
	nickname = iname;
}
void User::setPassword(const string &ipassword)
{
	People::setPassword(ipassword);
}
string User::getNickname() const
{
	return nickname;
}
string User::getID() const
{
	return id;
}
string User::getPassword()
{
	return pw.getPassword();
}
void User::setAllBorrowedISBN(string s1, string s2, string s3, string s4, string s5, string s6, string s7, string s8)
{
	userDiscBorrowed[0] = s1;
	userDiscBorrowed[1] = s2;
	userDiscBorrowed[2] = s3;
	userDiscBorrowed[3] = s4;
	userDiscBorrowed[4] = s5;
	userDiscBorrowed[5] = s6;
	userDiscBorrowed[6] = s7;
	userDiscBorrowed[7] = s8;
}
void User::getAllBorrowedISBN(string* &s)
{
	for (int i = 0; i < 7; i++)
	{
		s[i] = userDiscBorrowed[i];
	}
}
void User::userDiscDisplay(DiscList &iDisclist)
{
	cout << "您借阅的影片如下：" << endl;

}