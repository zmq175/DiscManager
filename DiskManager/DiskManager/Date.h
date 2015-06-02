#pragma once
#include <string>
#include <iostream>
class Date  //创建一个Date类，
{
	int year, month, day;//
private:
	int DayOfMonth(int y, int m)const;//返回一个月的天数。
	int ToInt()const;//
public:
	Date() //构造函数，初始化默认的日期
		:year(1900), month(1), day(1)
	{
	}
	Date(int y, int m, int d)
		:year(y), month(m), day(d)//对日期赋值，判断有效的日期。
	{
		if ((y <= 0) || (m <= 0 || m>12) || (d <= 0 || d>DayOfMonth(y, m)))
		{
			year = 1900;
			month = day = 1;
		}
	}
	virtual ~Date()//虚析构函数。
	{
	}
	int GetYear()const//返回年份
	{
		return year;
	}

	int GetMonth()const   //返回月份
	{
		return month;
	}
	int GetDay()const   //返回日期
	{
		return day;
	}
	void setDate(int iyear,int imonth,int iday);//设置日期
	bool IsLeapyear() const    //判断是否为平年。
	{
		return year % 400 ? (year % 100 ? (year % 4 ? (false) : (true)) : (false)) : true;
	}
	bool IsLeapyear(const int y) const //判断是否为平年。
	{
		return y % 400 ? (y % 100 ? (y % 4 ? false : true) : false) : true;
	}
	void Display() const  //输出日期值
	{
		std::cout << year << "-" << month << "-" << day << std::endl;
	}
	//重载操作符
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