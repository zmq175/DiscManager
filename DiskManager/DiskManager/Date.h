#pragma once
#include <string>
#include <iostream>
class Date  //����һ��Date�࣬
{
	int year, month, day;//
private:
	int DayOfMonth(int y, int m)const;//����һ���µ�������
	int ToInt()const;//
public:
	Date() //���캯������ʼ��Ĭ�ϵ�����
		:year(1900), month(1), day(1)
	{
	}
	Date(int y, int m, int d)
		:year(y), month(m), day(d)//�����ڸ�ֵ���ж���Ч�����ڡ�
	{
		if ((y <= 0) || (m <= 0 || m>12) || (d <= 0 || d>DayOfMonth(y, m)))
		{
			year = 1900;
			month = day = 1;
		}
	}
	virtual ~Date()//������������
	{
	}
	int GetYear()const//�������
	{
		return year;
	}

	int GetMonth()const   //�����·�
	{
		return month;
	}
	int GetDay()const   //��������
	{
		return day;
	}
	void setDate(int iyear,int imonth,int iday);//��������
	bool IsLeapyear() const    //�ж��Ƿ�Ϊƽ�ꡣ
	{
		return year % 400 ? (year % 100 ? (year % 4 ? (false) : (true)) : (false)) : true;
	}
	bool IsLeapyear(const int y) const //�ж��Ƿ�Ϊƽ�ꡣ
	{
		return y % 400 ? (y % 100 ? (y % 4 ? false : true) : false) : true;
	}
	void Display() const  //�������ֵ
	{
		std::cout << year << "-" << month << "-" << day << std::endl;
	}
	//���ز�����
	void operator=(const Date &a);
	friend Date operator + (const int v, const Date a);
	friend Date operator + (const Date a, const int v);
	friend Date operator +=(Date &a, const int v);
	friend Date operator ++(Date &a);
	friend Date operator ++(Date &a, int);
	friend Date operator - (const Date a, const int v);
	friend int operator - (const Date a, const Date b);
	friend Date operator -=(Date &a, const int v);
	friend Date operator --(Date &a);
	friend Date operator --(Date &a, int);
	friend bool operator > (const Date a, const Date b);
	friend bool operator >=(const Date a, const Date b);
	friend bool operator < (const Date a, const Date b);
	friend bool operator <=(const Date a, const Date b);
	friend bool operator ==(const Date a, const Date b);
	friend bool operator !=(const Date a, const Date b);
	friend std::ostream & operator <<(std::ostream &os,const Date &d);
	friend std::istream & operator >>(std::istream &is,Date &d);
};