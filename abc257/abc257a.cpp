#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N,X;
    cin >> N >> X ;
    char c = 0x40 + ( ( X + N - 1 ) / N);
    cout << c << endl;
    return 0;
}