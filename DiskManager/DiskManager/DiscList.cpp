#include "DiscList.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void DiscList::add(Disc &d)
{
	Disc* pivot=new Disc(d);
	if(ptr)
	{
		pivot->next=ptr;
	}
	if(!ptr)
	{
		pivot->next=NULL;
	}
	ptr=pivot;
}
void DiscList::display()
{
	for (Disc* pivot = ptr; pivot; pivot=pivot->next)
	{
		pivot->show();
	}
}
void DiscList::find()
{
	string input = "null";
	cout << "欢迎使用搜索系统！\n请输入想要查找的硬碟名称：\n";
	cin >> input;
	for (Disc* i = ptr; i ; i=i->next)
	{
		if (i->getName().find(input)!=i->getName().npos)
		{
			i->show();
			cout << endl;
		}
	}
}
void DiscList::write()
{
	ofstream out("Disclist.dmdata");
	for (Disc* i = ptr; i!=NULL ; i=i->next)
	{
		if (!i->issetISBN())
		{
			out << i->getName() << i->getCountry() << i->getCategory() << i->getISBN() << i->getTotal()<<endl;
		}
	}
}
void DiscList::userDiscFind(string iisbn)
{
	for (Disc* m = ptr; m ; m = m->next)
	{
		if (m->getISBN() == iisbn)
		{
			cout << "影片名称：" << m->getName() << endl;
			cout << "国家：" << m->getCountry() << endl;
			cout << "类别：" << m->getCategory() << endl;
			cout << "ISBN：" << m->getISBN() << endl;
		}
	}
}