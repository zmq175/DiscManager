#include "People.h"
#include <iostream>
using namespace std;
void People::setNickname(string iiname)
{
	nickname = iiname;
}
void People::setPassword(string ipw)
{
	pw.setPassword(ipw);
}
void People::show()
{
	cout << "�ǳƣ�" << this->nickname << endl
		<< "�û���" << this->id << endl;
}