#include <iostream>
using namespace std;

class DaThuc {
	int* a;
	int n;

public:
	DaThuc(int n) {
		this->n = n;
		a = new int[n];
	}
	DaThuc operator+(DaThuc p2) {
		int max = n > p2.n ? n : p2.n;
		int min = n < p2.n ? n : p2.n;

		DaThuc p(max);
		for (int i = 0; i < min; i++) {
			p.a[i] = a[i] + p2.a[i];
		}
		for (int i = min; i <= max && min != max; i++) {
			p.a[i] = max == n ? a[i] : p2.a[i];
		}
		return p;
	}
	friend istream& operator>>(istream& is, DaThuc &p);
	friend ostream& operator<<(ostream& os, DaThuc p);
};

istream& operator>>(istream& is, DaThuc &p) {
	cout << "Nhap vao bac da thuc: ";
	is >> p.n;
	p.a = new int[p.n];
	for (int i = 0; i < p.n; i++)
	{
		cout << "a" << i << ": ";
		is >> p.a[i];
	}
	return is;
}
ostream& operator<<(ostream& os, DaThuc p) {
	for (int i = 0; i < p.n; i++)
	{
		os << p.a[i] << "x^" << i;
		if (i < p.n - 1)
			os << "+";
	}
	return os;
}

void main()
{
	DaThuc p1(5), p2(4);
	cin >> p1;
	cin >> p2;
	cout << p1 + p2;

	cout << endl;
	system("pause");
}