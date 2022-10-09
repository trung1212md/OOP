 #include<bits/stdc++.h>
using namespace std;
class truong;

class khoa
{
    char makh[30];
    char tenkh[30];
    int sgv;
    friend class truong;
    friend void timkiem(truong k);
    friend void sap(truong k);

};
class truong
{
    char matr[30];
    char tentr[30];
    khoa*x;
    int n;
public :
    void nhap();
    void xuat();
    friend void timkiem(truong k);
    friend void sap(truong k);
};
void truong::nhap()
{

    cout << "ma truong";
    fflush(stdin);
    cin.getline(matr,30);
    cout << "ten truong ";
    fflush(stdin);
    cin.getline(tentr,30);
    cout <<"n=";
    cin >> n;
    x=new khoa[n];
    for(int i=0; i<n; i++)
    {
        //char k[30];
        cout << "ma khoa ";
        fflush(stdin);
        cin.getline(x[i].makh,30);
        cout << "ten khoa";
        fflush(stdin);
        cin.getline(x[i].tenkh,30);
        cout<<"so giao vien";
        cin >> x[i].sgv;

    }
}
void truong::xuat()
{
    cout <<"ma truong"<<matr<<endl;
    cout << "ten truong"<<tentr<<endl;
    for(int i=0; i<n; i++)
    {
        cout << setw(10)<<x[i].makh<<setw(20)<<x[i].tenkh<<setw(15)<<x[i].sgv<<endl;
    }
}
void timkiem(truong k)
{
    int d=0;
    for(int i=0; i<k.n; i++)

        if(strcmp(k.x[i].tenkh,"cntt")==0)
            d++;
    if(d==0)
        cout <<"khog co khoa cntt";
    else
        cout <<"co khoa cntt";
}
void sap(truong k)
{

    for(int i=0; i<k.n; i++)
        for(int j=i+1; j<k.n; j++)
            if(k.x[i].sgv>k.x[j].sgv)
                swap(k.x[i],k.x[j]);



}
int main()
{
    truong k;
    k.nhap();
    k.xuat();
    timkiem(k);

    sap(k);
    k.xuat();
}
