#include "Running.h"
#include "Trail.h"
#include "Charity.h"
#include "Normal.h"
#include <vector>
void nhap(Running **p, int n)
{
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        cout << "Nhap 1.Normal, 2.Charity, 3.Trail" << endl;
        cin >> x;
        switch (x)
        {
        case 1:
            p[i] = new Normal;
            p[i]->nhap();
            break;
        case 2:
            p[i] = new Charity;
            p[i]->nhap();
            break;
        case 3:
            p[i] = new Trail;
            p[i]->nhap();
            break;
        default:
            break;
        }
    }
}
void xuat(Running **p, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Giai chay thu " << i + 1 << endl;
        p[i]->xuat();
    }
}
int tongLePhi(Running **p, int n, int x)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == x)
        {
            sum = p[i]->getLePhi();
        }
    }
    return sum;
}

bool checkHopLe(int a, int b)
{
    if (abs(a - b) < 14)
        return false;
    return true;
}
void xuatC(Running **p, vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (p[a.at(i)]->getCuLy() >= 42)
        {
            if (!checkHopLe(p[a.at(i)]->getNgay(), p[a.at(i + 1)]->getNgay()))
            {
                cout << "Cuoc thi thu " << i + 1 << " Khong hop le co thong tin nhu sau" << endl;
                p[a.at(i)]->xuat();
            }
        }
    }
}
int main()
{
    int n = 0;
    cout << "Nhap so luong giai chay bo";
    cin >> n;
    Running **a = new Running *[n];
    vector<int> c;
    nhap(a, n);
    xuat(a, n);
    int sum = 0;
    int current = 0;
    while (1)
    {
        if (n < 3)
        {
            cout << "Danh sach nay khong du 3 cuoc thi";
            break;
        }
        cout << "Chon cuoc thi trong danh sach bang cach nhap so thu tu cua cuoc thi do";
        int x = 0;
        cin >> x;
        if (x == 69)
            break;
        c.push_back(x - 1);
        sum += tongLePhi(a, n, x);
    }

    cout << "Tong le phi phai dong la" << sum << endl;
    xuatC(a, c);
}