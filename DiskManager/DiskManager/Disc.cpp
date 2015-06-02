#include "Disc.h"
#include <iostream>
using namespace std;
Disc::Disc(string iname,string icountry,string icategory,string iisbn,int itotal)
{
	name=iname;
	country=icountry;
	category=icategory;
	isbn=iisbn;
	total=itotal;
}
Disc::Disc(const Disc& d)
{
	name = d.name;
	country = d.country;
	category = d.category;
	isbn = d.isbn;
	total = d.total;
}
Disc* Disc::getNext() const
{
	return next;
}
string Disc::getName() const
{
	return name;
}
string Disc::getCountry() const
{
	return country;
}
string Disc::getCategory() const
{
	return category;
}
string Disc::getISBN() const
{
	return isbn;
}
int Disc::getTotal() const
{
	return total;
}
void Disc::show() const
{
	cout << "ӰƬ���ƣ�" << getName() << endl;
	cout << "���ң�" << getCountry() << endl;
	cout << "���" << getCategory() << endl;
	cout << "ISBN��" << getISBN() << endl;
	cout << "�ڿ���Ŀ��" << getTotal() << endl;
}
void Disc::setName(string iname)
{
	name=iname;
}
void Disc::setCountry(string icountry)
{
	country=icountry;
}
void Disc::setCategory(string icategory)
{
	category=icategory;
}
void Disc::setISBN(string iisbn)
{
	isbn=iisbn;
}
void Disc::borrowDisc()
{
	total--;
}
void Disc::returnDisc()
{
	total++;
}
void Disc::storeDisc(int num)
{
	total+=num;
}
bool Disc::issetISBN()
{
	return (this->isbn == "NULL");
}
bool Disc::operator==(const Disc & d) const
{
	return (this->isbn==d.isbn);
}