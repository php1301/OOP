#include <iostream>
using namespace std;
#pragma once
class Running
{
protected:
    int cuLy, lePhi, ngay;
    string ten, diaDiem, loai;

public:
    Running(/* args */);
    virtual void nhap();
    virtual void xuat();
    virtual int getLePhi()
    {
        return lePhi;
    }
    virtual int getCuLy()
    {
        return cuLy;
    }
    virtual int getNgay()
    {
        return ngay;
    }
    ~Running();
};

Running::Running(/* args */)
{
}
void Running::nhap()
{
    cout << "Nhap ten cuoc thi" << endl;
    cin >> ten;
    cout << "Nhap ngay to chuc cuoc thi" << endl;
    cin >> ngay;
    cout << "Nhap dia diem cuoc thi" << endl;
    cin >> diaDiem;
}
void Running::xuat()
{
    cout << "Giai chay " << loai << " co ten la " << ten << " duoc to chuc o " << diaDiem << "vao ngay "
         << ngay << " co cu ly la " << cuLy << " va le phi la " << lePhi << endl;
}
Running::~Running()
{
}
