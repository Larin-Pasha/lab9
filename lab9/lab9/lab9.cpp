
/*
������ 1. ������� ����� ����:
class Base
{public:
virtual void myname() { cout << "This is class Base" << endl; }
};
³� ����� ����� ����� �������� ��� �������� �����: DerA � DerB.
³� ����� DerA � DerB ������ ���������� ������������ �������� ����
DerAB.
������������� � ������� � ��������� ����� ������� myname �����
�����, ��� ���� �������� �� ����� ����� ��� ����� �ᒺ���, ��� ����� ����
�����������.
��� ������� � ����� �������� �������� �������� �� ������ �ᒺ��� � ���
������� � ��� �������� ������� myname.
������� ����� �� 4 ��������� �� ������� ���� ��������. ��� ������� � ���
������� ��������� �ᒺ��, �� ������ ��� ������� � ����� ��������. ��������
������ ������� myname ��� ������� � ��������� �ᒺ��� �� ���������
���������.
������� �� ������� mymain � ��� ��������.
*/


#include<iostream>

using namespace std;

class Base {

public:

	virtual void myname() {
		cout << "This is class Base" << endl;

	}

};

class DerA : public Base {

public:

	void myname() { cout << "Class DerA" << endl; }

};

class DerB :public Base {

public:

	void myname() {

		cout << "Class DerB" << endl;
	}

};

int main() {

	Base one;
	Base* tmp;
	DerA two;
	DerB three;
	tmp = &one;
	tmp->myname();
	tmp = &two;
	tmp->myname();
	tmp = &three;
	tmp->myname();

	return 0;

}
