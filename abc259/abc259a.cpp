#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N,M,X,T,D;
    cin >> N >> M >> X >> T >> D;
    int ans = 0;
    if ( M >= X ) {
        ans = T ;
    }
    else {
        ans = T - ( X - M ) * D ;
    }
    cout << ans << endl;
    return 0;
}