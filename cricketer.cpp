#include<iostream>
using namespace std;
class cricketer{
    private:
    string name;
    int runs,matches;

    public:
    void getdata()
    {
        cout<<"ENTER THE NAME,RUNS AND MATCHES:";
        getline(cin,name);
        cin>>runs>>matches;
    }
    void display()
    {
        cout<<name<<" "<<runs<<" "<<matches;
    }
};
int main()
{
    cricketer c1;
    c1.getdata();
    c1.display();
    
    return 0;
}