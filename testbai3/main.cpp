#include <bits/stdc++.h>

using namespace std;
class SP
{
    int thuc;
    int ao;
public:
    SP();
    SP(int x,int y);
    SP operator+(SP y);
    SP operator-(SP y);
    friend ostream&operator<<(ostream &x,SP y);

};
SP::SP()
{
    thuc=0;
    ao=0;

}
SP::SP(int x,int y)
{

    this->thuc=x;
    this->ao=y;
}
SP SP::operator+(SP y)
{
    SP T;
    T.thuc=thuc+y.thuc;
    T.ao=ao+y.ao;
    return T;

}
SP SP::operator-(SP y)
{
    SP H;
    H.thuc=thuc-y.thuc;
    H.ao=ao-y.ao;
    return H;

}
ostream &operator<<(ostream &x,SP y)
{
    x<<y.thuc<<"+i*"<<y.ao<<endl;
    return x;
}

int main()
{
    SP SP1,SP2;
    cout <<"nha pso phuc 1";
    cin>>SP1;
    cout<<"so phuc 2";
    cin>>SP2;
    SP SP3,Sp4;
    SP3=SP1+SP2;
    Sp4=SP1-SP2;
    cout<<"tong"<<SP3<<endl;
    cout <<"hieu"<<SP4<<endl;
    ofstream f("D:/sophuc.txt",ios::);
     f<<"tong"<<SP3<<endl;
    f <<"hieu"<<SP4<<endl;
    f.close();
}
