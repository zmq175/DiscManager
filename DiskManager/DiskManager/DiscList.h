#ifndef DiscLIST_H_
#define DiscLIST_H_
#include "Disc.h"
class DiscList{
public:
	DiscList() :ptr(0){}
	void add(Disc &d);//��������ڵ�
	void display();//���
	void find();//����
	void write();//д���ļ�
	void userDiscFind(string iisbn);//���û������б��в���
	~DiscList();
private:
	Disc* ptr;
};
#endif