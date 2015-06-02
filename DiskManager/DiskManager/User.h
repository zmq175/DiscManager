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
	void setNickame(const string &iname);//�趨�ǳ�
	void setPassword(const string &ipassword);//�趨����
	string getNickname() const;//����ǳ�
	string getID() const;//����û���
	string getPassword();//�������
	void setAllBorrowedISBN(string s1, string s2, string s3, string s4, string s5, string s6, string s7, string s8);//����ȫ����������ISBN
	void getAllBorrowedISBN(string* &s);//���ؽ�����Ŀ������
	void userDiscDisplay(DiscList &iDisclist);//��ʾ���߽�����Ϣ
	~User();
private:

};

#endif