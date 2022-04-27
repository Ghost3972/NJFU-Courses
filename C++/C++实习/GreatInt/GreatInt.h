#ifndef GreatInt_H
#define GreatInt_H
#include<string>
using namespace std;
typedef struct queue {
	int i;
	queue* next;
}*Queue;
class GreatInt {
public:
	GreatInt(string a);
	GreatInt(const GreatInt& b);//���ƹ��캯��
	~GreatInt();//��������
	friend ostream& operator<<(ostream& os, const GreatInt& rhs);
	GreatInt operator+(const GreatInt& rhs) const;		//��������
	GreatInt operator-(const GreatInt& rhs) const;		//�ӷ�����
	const GreatInt& factorial(int nums);
private:
	int compare(const GreatInt& rhs) const;			//���бȽ�
	string add(const GreatInt& lhs, const GreatInt& rhs) const;			//�����Ӽ�������
	string min(const GreatInt& lhs, const GreatInt& rhs) const;
	void multiply(const int n);							//�����׳�����
	bool signal;//����������TRUEΪ-�����ţ���FALSEΪ+�����ţ�
	Queue head;
	Queue tail;
};

#endif
