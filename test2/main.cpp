#include <iostream>

using namespace std;
class VECTER
{
    int *a;
    int n;
public:
    friend istream& operator >>(istream &x,VECTER &y);
    friend ostream &operator <<(ostream &x,VECTER y);
};
istream& operator >>(istream &x,VECTER &y)
{
    x>>y.n;
    y.a=new int [y.n];
    for(int i=0;i<y.n;i++)
        x>>y.a[i];
        return x;
}
ostream &operator <<(ostream &x,VECTER y)
{
    x<<y.n<<endl;
    for(int i=0;i<y.n;i++)
        x<<y.a[i]<<" ";
        x<<endl;
        return x;
}
int main()
{
    VECTER P,Q;
    cin>>P;cin>>Q
    cout <<P<<Q;
    fstream f("D:/text1.txt",ios::out)
    f<<P;
    f<<Q;
    f.close();
    fstream f("D:/text1.txt",ios::in)
    f<<P;
    f<<Q;
    f.close();
     cout<<P<<endl;
      cout<<Q<<endl;

}
