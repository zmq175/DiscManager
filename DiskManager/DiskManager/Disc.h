#ifndef Disc_H_
#define Disc_H_
#include <string>
using namespace std;
class Disc{
public:
	Disc(string iname="UNKNOWN",string icountry="UNKNOWN",string icategory="UNKNOWN",string iisbn="NULL",int itotal=256);//构造函数
	Disc(const Disc & d);//拷贝构造函数
	string getName() const;//返回名称
	Disc* next;
	Disc* getNext() const;
	string getCountry() const;//返回国家
	string getCategory() const;//返回类别
	string getISBN() const;//返回ISBN
	int getTotal() const;//返回在库数目
	void show() const;//输出影碟信息
	void setName(string iname);//设置名称
	void setCountry(string icountry);//设置国家
	void setCategory(string icategory);//设置类别
	void setISBN(string iisbn);//设置ISBN号
	void borrowDisc();//借出
	void returnDisc();//归还
	void storeDisc(int num=1);//增加库存
	bool issetISBN();//检查是否设定ISBN
	bool operator==(const Disc & d) const;
	~Disc(){};
private:
	string name;//影碟名称
	string country;//国家
	string category;//类别
	string isbn;//ISBN编号
	int total;//在库数目
};
#endif