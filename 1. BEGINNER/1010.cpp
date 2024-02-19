#include<bits/stdc++.h>
using namespace std;
int main()
{
    int pCode1,pUnit1;
    int pCode2,pUnit2;
    double pPrice1,pPrice2,total,product1,product2;
    cin>>pCode1>>pUnit1>>pPrice1;
    product1=pUnit1*pPrice1;
    cin>>pCode2>>pUnit2>>pPrice2;
    product2=pUnit2*pPrice2;
    total=product1+product2;
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<total<<endl;

}
