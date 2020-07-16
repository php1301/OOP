#include "Running.h"
class Trail : public Running
{
private:
    int fee;

public:
    Trail(/* args */)
    {
        loai = "Trail";
    }
    void nhap();
    void xuat();
    ~Trail();
};

void Trail::nhap()
{
    cout << "Ban chon giai chay trail" << endl;
    Running::nhap();
    cout << "Moi nhap le phi cua giai chay trail" << endl;
    cin >> lePhi;
    cout << "Moi nhap cu ly trong cac lua chon 50, 80, 100, le phi se tang dan theo muc cu ly" << endl;
    cin >> cuLy;
    switch (cuLy)
    {
    case 50:
        lePhi += 10000;
    case 80:
    {
        lePhi += 20000;
    }
    case 100:
    {
        lePhi += 30000;
    }
    default:
        break;
    }
    cout << "Giai chay trail se rat kho khan nen nhap them phi khach san tu 200000-500000" << endl;
    do
    {
        cout << "Nhap le phi khach san tu 200000-500000";
        cin >> fee;
    } while (fee > 200000 && fee < 500000);
    lePhi += fee;
}
void Trail::xuat()
{
    Running::xuat();
    cout << "Chay trail nen co le phi khach san la " << fee << endl;
}
Trail::~Trail()
{
}
