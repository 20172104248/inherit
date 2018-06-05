// inherit.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class CTest
{
protected:
    int a;
	int b;
public:
	CTest();
	CTest(int i, int j);
	void display();
};
CTest::CTest()
{
	a = 0;
	b = 0;
	cout << "默认构造函数" << "a=" << a << "  "<<"b=" << b << endl;
}
CTest::CTest(int i, int j)
{
	a = i;
	b = j;
	cout << "构造函数" << "a=" << a << "  " << "b=" << b << endl;
}
void CTest::display()
{
	cout << "a=" << a << "  " << "b=" << b << endl;
}
class CMyTest :public CTest
{
public:
	CMyTest(int i, int j);
	CMyTest();
};

CMyTest::CMyTest()
{
	cout << "派生类默认构造函数" << "a=" << a << "  " << "b=" << b << endl;
}
CMyTest::CMyTest(int x,int y):CTest(x,y)
{
	cout << "派生类构造函数" << "a=" << a << "  " << "b=" << b << endl;
}

int main()
{   
	int x, y;
	CTest eg;
	eg.display();
	CTest eg1(1, 2);
	eg1.display();

	CMyTest eg2;
	eg2.display();
	CMyTest eg3(10,20);
	eg3.display();

    return 0;
}

