#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    cin >> N;
    long int P = 0;
    vector<int> vec(4,0);
    for(int i=0;i<N;i++){
        int a;
        cin >> a;
        // operation 1.
        vec[0] = 1;
        // operation 2.
        for(int j=3;j>=0;j--){
            if ( vec[j] == 0 ) {
                continue;
            }
            if ( j + a >= 4 ) {
                P += 1;
                vec[j] = 0;
            }
            else {
                vec[j] = 0;
                vec[j+a] = 1;
            }
        }
    }
    //
    cout << P << endl;
    return 0;
}