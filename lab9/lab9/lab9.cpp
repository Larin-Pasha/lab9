
/*
Варіант 1. Наданий такий клас:
class Base
{public:
virtual void myname() { cout << "This is class Base" << endl; }
};
Від цього класу треба створити два похідних класу: DerA і DerB.
Від класів DerA і DerB шляхом множинного успадкування створити клас
DerAB.
Перевизначити у кожному з створених класів функцію myname таким
чином, щоб вона виводила на екран дійсне ім’я класу об’єкту, для якого вона
викликається.
Для кожного з класів створеної ієрархії створити по одному об’єкту і для
кожного з них викличте функцію myname.
Створіть масив із 4 покажчиків на базовий клас ієрархії. Для кожного з них
створіть динамічний об’єкт, по одному для кожного з класів ієрархії. Запишіть
виклик функції myname для кожного з динамічних об’єктів за допомогою
покажчиків.
Поясніть дію функції mymain у всіх випадках.
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
