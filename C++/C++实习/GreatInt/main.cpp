#include <iostream>
#include "GreatInt.cpp"
#include <string>
using namespace std;

//���Ѿ���װ��ֱ��ʹ�ü���
int main()
{
	string first;
	string second;
	string third;
	cout << "Please enter two nums:" << endl;

	cout << "the first: ";
	cin >> first;
	cout << "the second: ";
	cin >> second;
	GreatInt one(first);			//ʹ�ù��캯�����з�װ
	GreatInt two(second);

	cout << endl;
	cout << "the result of (first + second)" << endl;
	cout << one + two << endl;		//�ӷ�����

	cout << endl;
	cout << "the result of (first - second)" << endl;
	cout << one - two << endl;		//��������

	cout << endl;
	cout << "factorial 100:" << endl;
	GreatInt three(third);
	cout << three.factorial(100);	//���ó�Ա��������100�Ľ׳�����

	return 0;
}