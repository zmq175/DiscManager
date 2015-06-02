#include "Date.h"
//得到每个月的天数。。。。
void Date::setDate(int iyear, int imonth, int iday)
{
	year = iyear;
	month = imonth;
	day = iday;
	if ((iyear <= 0) || (imonth <= 0 || imonth>12) || (iday <= 0 || iday>DayOfMonth(iyear, imonth)))
	{
		year = 1900;
		month = day = 1;
	}
}
int Date::DayOfMonth(int y, int m)const
{
	int d = 0;
	switch (m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		d = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		d = 30;
		break;
	case 2:
		d = 28 + IsLeapyear(y);
		break;
	}
	return d;
}
int Date::ToInt()const
{
	int sum = 0;
	for (int y = 1; y<year; ++y)
	{
		sum += 365 + IsLeapyear(y);
	}
	for (int m = 1; m<month; ++m)
		sum += DayOfMonth(year, m);
	sum += day;
	return sum;
}
/////日期加天数。。const int v,const Date a。。
void Date::operator=(const Date &a)
{
	this->year = a.year;
	this->month = a.month;
	this->day = a.day;
}
Date operator + (const int v, const Date a)
{
	Date d = a;
	if (v == 0) return d;//如果天数为0，返回当个月
	if (v>0)//如果大于零。
	{
		d.day += v;  //将当天日期加上要增加的数
			while (d.day>d.DayOfMonth(d.year, d.month))//////当加所加天数超过当月天数
			{
				d.day -= d.DayOfMonth(d.year, d.month);
				d.month++;                          //////月份加一
				if (d.month>12)                ///如果月份大于12，那么就增加一年。
				{
					++d.year;
					d.month = 1;
				}
			}
		return d;
	}
	else
		return d - (-v);
}
/////日期加天数。。const Date a,const int v  同上，方法的重载。
Date operator +(const Date a, const int v)
{
	Date d = a;
	if (v == 0) return d;
	if (v>0)
	{
		d.day += v;
		while (d.day>d.DayOfMonth(d.year, d.month))
		{
			d.day -= d.DayOfMonth(d.year, d.month);
			d.month++;
			if (d.month>12)
			{
				++d.year;
				d.month = 1;
			}
		}
		return d;
	}
	else
		return d - (-v);
}
//////////////加操作~同上。
Date operator +=(Date &a, const int v)
{
	if (v == 0) return a;
	if (v>0)
	{
		a.day += v;
		while (a.day>a.DayOfMonth(a.year, a.month))
		{
			a.day -= a.DayOfMonth(a.year, a.month);
			a.month++;
			if (a.month>12)
			{
				++a.year;
				a.month = 1;
			}
		}
		return a;
	}
	else
		return a -= (-v);
}
//////日期自增操作。。。。。。同上，，，，，
Date operator ++(Date &a)
{
	++a.day;
	if (a.day>a.DayOfMonth(a.year, a.month))
	{
		a.day -= a.DayOfMonth(a.year, a.month);
		a.month++;
		if (a.month>12)
		{
			++a.year;
			a.month = 1;
		}
	}
	return a;
}

////自增操作。
Date operator ++(Date &a, int)
{
	Date d = a;
	++a.day;
	if (a.day>a.DayOfMonth(a.year, a.month))
	{
		a.day -= a.DayOfMonth(a.year, a.month);
		a.month++;
		if (a.month>12)
		{
			++a.year;
			a.month = 1;
		}
	}
	return d;
}
/////减操作。。。。。
Date operator - (const Date a, const int v)
{
	Date d = a;
	if (v == 0) return d;
	if (v>0)
	{
		d.day -= v;
		while (d.day <= 0)
		{
			--d.month;
			if (d.month == 0)
			{
				d.month = 12;
				--d.year;
			}
			d.day += d.DayOfMonth(d.year, d.month);
		}
		return d;
	}
	else
		return d + (-v);
}
int operator - (const Date a, const Date b)
{
	return a.ToInt() - b.ToInt();
}
Date operator -=(Date &a, const int v)
{
	if (v == 0) return a;
	if (v>0)
	{
		a.day -= v;
		while (a.day <= 0)
		{
			--a.month;
			if (a.month == 0)
			{
				a.month = 12;
				--a.year;
			}
			a.day += a.DayOfMonth(a.year, a.month);
		}
		return a;
	}
	else
		return a += (-v);
}
Date operator --(Date &a)
{
	--a.day;
	while (a.day <= 0)
	{
		--a.month;
		if (a.month == 0)
		{
			a.month = 12;
			--a.year;
		}
		a.day += a.DayOfMonth(a.year, a.month);
	}
	return a;
}
Date operator --(Date &a, int)
{
	Date d = a;
	--a.day;
	while (a.day <= 0)
	{
		--a.month;
		if (a.month == 0)
		{
			a.month = 12;
			--a.year;
		}
		a.day += a.DayOfMonth(a.year, a.month);
	}
	return d;
}
/////日期的比较。。
bool operator > (const Date a, const Date b)
{
	return a.ToInt()>b.ToInt();
}
bool operator >=(const Date a, const Date b)
{
	return a.ToInt() >= b.ToInt();
}
bool operator < (const Date a, const Date b)
{
	return a.ToInt()<b.ToInt();
}
bool operator <=(const Date a, const Date b)
{
	return a.ToInt() <= b.ToInt();
}
bool operator ==(const Date a, const Date b)
{
	return a.ToInt() == b.ToInt();
}
bool operator !=(const Date a, const Date b)
{
	return a.ToInt() != b.ToInt();
}
std::ostream & operator <<(std::ostream &os,const Date &d)
{
os<<d.year<<"-"<<d.month<<"-"<<d.day;
return os;
}
std::istream & operator >>(std::istream &is,Date &d)
{
Date old = d;
is>>d.year>>d.month>>d.day;
if((d.year<=0) ||(d.month>12||d.month<=0) || (d.day<=0||d.day>d.DayOfMonth(d.year,d.month)))
{
d = old;
throw std::exception("Invalid number of date.");
}
return is;
}
