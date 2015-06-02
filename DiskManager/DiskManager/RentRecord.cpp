#include "RentRecord.h"
#include <iostream>
using namespace std;
RentRecord::RentRecord(string iisbn, string iuid, int y, int m, int d)
{
	isbn = iisbn;
	uid = iuid;
	borrowdate.setDate(y, m, d);
}
string RentRecord::getISBN() const
{
	return isbn;
}
string RentRecord::getUid() const
{
	return uid;
}
Date RentRecord::getBorrowDate() const
{
	return borrowdate;
}
void RentRecord::setISBN(const string iisbn)
{
	isbn = iisbn;
}
void RentRecord::setUid(const string iuid)
{
	uid = iuid;
}
void RentRecord::setBorrowDate(const Date &d)
{
	borrowdate = d;
}
void RentRecord::setBorrowDate(const int y, const int m, const int d)
{
	borrowdate.setDate(y, m, d);
}