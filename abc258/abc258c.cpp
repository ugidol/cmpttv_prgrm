#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N,Q;
    cin >> N >> Q ;
    string S;
    cin >> S;
    //
    int p = 0;
    for(int i=0;i<Q;i++){
        int t,x;
        cin >> t >> x;
        if ( t == 1 ) {
            p = ( p - x + N ) % N;
        }
        if ( t == 2 ) {
            cout << S[(p + x - 1)%N] << '\n';
        }
    }
    return 0;
}