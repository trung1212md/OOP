#include <bits/stdc++.h>

using namespace std;
class Hang
{
protected:
    char MaH[30];
    char TenH[30];
    float DG;
    int SL;
public:
    void nhap();
    void xuaT();


};
class HANGMAYMAC:public Hang
{
    char KIEUDANG[30];
    float SIZE;
public:
    void nhap();
    void xuat();

};
class HANGDIENTU:public Hang
{
    float dienap,congxuat;
public:
    void nhap();
    void xuat();

};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
