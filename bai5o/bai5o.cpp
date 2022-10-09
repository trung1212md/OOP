#include <iostream>

using namespace std;

int main()
{
   int n;
   cout <<"nhap n";
   cin>>n;
    for(int i=1;i<1000000;i++)//chay vong for tu 1 den 1000000 chia lay du
        if(i%6==1)
        cout<<"Yes";
        cout<<"No";
}
