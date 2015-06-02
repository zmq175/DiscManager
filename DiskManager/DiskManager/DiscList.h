#ifndef DiscLIST_H_
#define DiscLIST_H_
#include "Disc.h"
class DiscList{
public:
	DiscList() :ptr(0){}
	void add(Disc &d);//增加链表节点
	void display();//输出
	void find();//搜索
	void write();//写入文件
	void userDiscFind(string iisbn);//从用户借走列表中查找
	~DiscList();
private:
	Disc* ptr;
};
#endif