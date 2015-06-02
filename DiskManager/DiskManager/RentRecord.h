#ifndef RENTRECORD_H_
#define RENTRECORD_H_
#include <string>
#include "Date.h"
using namespace std;
class RentRecord
{
public:
	RentRecord();//Ĭ�Ϲ��캯��
	RentRecord(string iisbn, string iuid, int y, int m, int d);
	string getISBN() const;//����ISBN
	string getUid() const;//�����û�ID
	Date getBorrowDate() const;//���ؽ�������
	void setISBN(const string iisbn);//����ISBN
	void setUid(const string iuid);//����UID
	void setBorrowDate(const Date &d);//���ý�������
	void setBorrowDate(const int y, const int m, const int d);//���ý�������
	~RentRecord();

private:
	string isbn;
	string uid;
	Date borrowdate;
};

RentRecord::RentRecord()
{
	isbn = "NULL";
	uid = "NULL";
	borrowdate.setDate(1970, 1, 1);
}

RentRecord::~RentRecord()
{
}
#endif