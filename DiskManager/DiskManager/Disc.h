#ifndef Disc_H_
#define Disc_H_
#include <string>
using namespace std;
class Disc{
public:
	Disc(string iname="UNKNOWN",string icountry="UNKNOWN",string icategory="UNKNOWN",string iisbn="NULL",int itotal=256);//���캯��
	Disc(const Disc & d);//�������캯��
	string getName() const;//��������
	Disc* next;
	Disc* getNext() const;
	string getCountry() const;//���ع���
	string getCategory() const;//�������
	string getISBN() const;//����ISBN
	int getTotal() const;//�����ڿ���Ŀ
	void show() const;//���Ӱ����Ϣ
	void setName(string iname);//��������
	void setCountry(string icountry);//���ù���
	void setCategory(string icategory);//�������
	void setISBN(string iisbn);//����ISBN��
	void borrowDisc();//���
	void returnDisc();//�黹
	void storeDisc(int num=1);//���ӿ��
	bool issetISBN();//����Ƿ��趨ISBN
	bool operator==(const Disc & d) const;
	~Disc(){};
private:
	string name;//Ӱ������
	string country;//����
	string category;//���
	string isbn;//ISBN���
	int total;//�ڿ���Ŀ
};
#endif