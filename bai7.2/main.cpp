#include <bits/stdc++.h>

using namespace std;
class SCHOOL
{
    char name[30];
    char Date[30];
    friend class FACULTY;
    friend class STUDENT;

};
class FACULTY
{
    char Name[30];
    char Date[30];
    SCHOOL x;
public:
    void input();
    void output();
    friend class STUDENT;


};
void FACULTY::input()
{
    cout <<"nhap Name";fflush(stdin);cin.getline(Name,30);
    cout <<"nhap date";fflush(stdin);cin.getline(Date,30);
    cout <<"nhap name ";fflush(stdin);cin.getline(x.name,30);
    cout <<"nhap date ";fflush(stdin);cin.getline(x.Date,30);

}
void FACULTY::output()
{
    cout <<" Name"<<Name<<endl;;
    cout <<" date"<<Date<<endl;;
  cout <<"name "<<x.name<<endl;
  cout <<"date"<<x.Date<<endl;
}


class PERSON
{
protected:
    char Name[30];
    char Birth[30];
    char Address[30];
public:
    void input();
    void output();
    PERSON();

};
void PERSON::input()
{
    cout<<"nhap name"<<Name;
    cout <<"nhap Birth"<<Birth;
    cout <<"nhap address"<<Address;


}
void PERSON::output()
{
    cout <<"name"<<Name<<endl;
    cout <<"birth"<<Birth<<endl;
    cout <<"address"<<Address<<endl;

}
PERSON::PERSON()
{
    strcpy(Name,"");
    strcpy(Birth,"");
    strcpy(Address,"");
}
class STUDENT:public PERSON
{
    FACULTY Y;
    char Class[30];
    float Score;
public :
    void input();
    void output();
    STUDENT();

};
void STUDENT::input()
{
    PERSON::input();
    Y.input();
    cout <<"class";fflush(stdin);cin.getline(Class,30);
    cout <<"score";cin>>Score;
}
void STUDENT::output()
{
    PERSON::output();
    Y.output();
    cout <<"class"<<Class<<endl;
    cout <<"score"<<Score<<endl;

}
STUDENT::STUDENT()
{
    strcpy(Class,"");
    Score=0;
   strcpy(Y.Name,"");
   strcpy(Y.Date,"");
   strcpy(Y.x.Date," ");
    strcpy(Y.x.name,"");


}
int main()
{
    STUDENT a;
    a.input();
    a.output();
}
