#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double R;
    double pi = M_PI;
    cin >> R;
    R = R * R;
    cout << fixed << setprecision(6) << R * pi << "\n";
    cout << fixed << setprecision(6) << R * 2 << "\n";
}

// pi가 double 변수이기 떄문에 변수 선언 시 유의해서 하기