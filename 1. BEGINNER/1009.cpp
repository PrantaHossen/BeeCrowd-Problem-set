#include<bits/stdc++.h>

using namespace std;

int main()
{
    string name;
    double salary,sold,total,x;
    cin>>name;
    cin>>salary;
    cin>>sold;
    x=sold*.15;
    total=x+salary;
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<total<<endl;


}
