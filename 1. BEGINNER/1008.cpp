#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int A,B;
    double C;
    cin >> A ;
    cin>> B;
    cin >> C;
    double avr=B*C;
    cout<<"NUMBER = "<<A<<endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << avr << endl;
    return 0;
}

