#include "Running.h"
class Charity : public Running
{
private:
    /* data */
public:
    Charity(/* args */)
    {
        loai = "Charity";
    }
    void nhap();
    ~Charity();
};

void Charity::nhap()
{
    cout << "Ban chon giai chay Charity" << endl;
    Running::nhap();
    cout << "Moi nhap le phi cua giai chay Charity" << endl;
    cin >> lePhi;
    cout << "Giai chay Charity khong co le phi them cho moi cu ly" << endl;
    cout << "Moi nhap cu ly 5km hoac 10km" << endl;
    cin >> cuLy;
    switch (cuLy)
    {
    case 5:
        cuLy = 5;
        break;

    case 10:
        cuLy = 10;
        break;
    }
}

Charity::~Charity()
{
}
