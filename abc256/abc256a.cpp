#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    cin >> N ;
    unsigned long ans = 1;
    for(int i=0;i<N;i++){
        ans *= 2;
    }
    cout << ans << endl;
    return 0;
}