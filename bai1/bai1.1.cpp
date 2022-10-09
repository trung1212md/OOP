#include <iostream>
using namespace std;
class Hang
{
    private:
    char mahang[30];
    char tenhang[30];
    float DG;
    public:
        void nhap();
        void xuat();
};
void Hang::nhap()
{

    cout << "nhap Ma hang"<<endl;fflush(stdin);gets(mahang)<<endl;
    cout << "nhap ten hang"<<endl;fflush(stdin);gets(tenhang)<<endl;
    cout << "don gia"<<endl;cin >> DG;
}
void Hang::xuat()
{
    cout << "ma hang"<<mahang<<endl;
    cout << "ten hang"<< tenhang<<endl;
    cout << "don gia"<<DG<<endl;

}

int main()
{
    Hang *a;
    int n;
    cout << "nhap n"<<endl;
    cin >> n;
    a=new Hang[n];
    for(int i=0;i<n;i++)
    {
        cout << "nhap so luong hang thu"<<i+1<<endl;
        a[i].nhap();
    }
     for(int i=0;i<n;i++)
    {
        a[i].xuat();
    }
    return 0;
}
