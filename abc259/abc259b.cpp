#include <bits/stdc++.h>
using namespace std;
const double PI=M_PI;
int main(void){
    int a,b,d;
    cin >> a >> b >> d;
    double r = sqrt(a * a + b * b );
    double degree = atan2(b,a) * 180.0 / PI;
    degree += d;
    double radian = degree * PI / 180.0 ;
    double x = cos(radian) * r;
    double y = sin(radian) * r;
    cout << fixed << setprecision(10) << x << ' ' << y << endl;
    return 0;
}