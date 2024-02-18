#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double A, B;
    const double weightA = 3.5;
    const double weightB = 7.5;
    cin >> A >> B;
    double average = (A * weightA + B * weightB) / (weightA + weightB);
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << average << endl;

    return 0;
}
