#ifndef RENTRECORD_H_
#define RENTRECORD_H_
#include <string>
#include "Date.h"
using namespace std;
class RentRecord
{
public:
	RentRecord();//默认构造函数
	RentRecord(string iisbn, string iuid, int y, int m, int d);
	string getISBN() const;//返回ISBN
	string getUid() const;//返回用户ID
	Date getBorrowDate() const;//返回借阅日期
	void setISBN(const string iisbn);//设置ISBN
	void setUid(const string iuid);//设置UID
	void setBorrowDate(const Date &d);//设置借阅日期
	void setBorrowDate(const int y, const int m, const int d);//设置借阅日期
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