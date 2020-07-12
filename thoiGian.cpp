#include <iostream>
#include <iomanip>
using namespace std;
class ThoiGian {
	long tsgiay;
	const int TSGIAY_NGAY = 86400;
public:
	ThoiGian()
	{
		tsgiay = 0; 
	}
	
	ThoiGian(int h, int m, int s)
	{
		tsgiay = h * 3600 + m * 60 + s; 
	}
	
	ThoiGian& operator=(ThoiGian t)
	{ 
		tsgiay = t.tsgiay; 
		return *this;
	}
	
	ThoiGian operator+(ThoiGian t2) 
	{
		ThoiGian t; 
		t.tsgiay = (tsgiay + t2.tsgiay) % TSGIAY_NGAY; 
		return t;
	}
	
	ThoiGian operator-(ThoiGian t2) {
		ThoiGian t;
		if (t.tsgiay = tsgiay - t2.tsgiay < 0)
			t.tsgiay = TSGIAY_NGAY + t.tsgiay; 
		return t; 
	}
	
	bool operator<(ThoiGian t) 
	{ 
		return tsgiay < t.tsgiay; 
	}
	
	bool operator>(ThoiGian t)
	{ 
		return tsgiay > t.tsgiay; 
	}
	
	bool operator==(ThoiGian t) 
	{
		return tsgiay == t.tsgiay; 
	}
	
	ThoiGian& operator++() 
	{ 
		tsgiay = (tsgiay + 1) % TSGIAY_NGAY; 
		return *this; 
	} 
	
	ThoiGian operator++(int) 
	{ 
		ThoiGian t = *this;
		tsgiay = (tsgiay + 1) % TSGIAY_NGAY; 
		return t; 
	}
	
	ThoiGian& operator--() 
	{ 
		if (--tsgiay < 0) tsgiay = TSGIAY_NGAY - 1; 
		return *this; 
	}
	
	ThoiGian operator--(int) 
	{ 
		ThoiGian t = *this; 
		if (--tsgiay < 0) tsgiay = TSGIAY_NGAY - 1; 
		return t;
	}
};

void main() {
	ThoiGian t(23, 9, 0), t1, t2;
	cout << t << endl;
	system("pause");

	cin >> ;
	cout << ;
}