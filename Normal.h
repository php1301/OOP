#include "Running.h"
class Normal : public Running
{
private:
    /* data */
public:
    Normal(/* args */)
    {
        loai = "Normal";
    }
    void nhap();
    ~Normal();
};

void Normal::nhap()
{

    cout << "Ban chon giai chay Normal" << endl;
    Running::nhap();
    cout << "Moi nhap le phi cua giai chay Normal" << endl;
    cin >> lePhi;
    cout << "Moi nhap cu ly trong cac lua chon 5, 10, 21, 42 le phi se tang dan theo muc cu ly" << endl;
    cin >> cuLy;
    switch (cuLy)
    {
    case 5:
    {
        lePhi += 10000;
        break;
    }
    case 10:
    {
        lePhi += 20000;
        break;
    }
    case 21:
    {
        lePhi += 30000;
        break;
    }
    case 42:
    {
        lePhi += 40000;
        break;
    }
    default:
        break;
    }
}
Normal::~Normal()
{
}
