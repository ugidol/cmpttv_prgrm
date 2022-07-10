#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    cin >> N;
    string S;
    cin >> S;
    vector<int> W(N);
    map<int,vector<int>> mp;
    for(int i=0;i<N;i++){
        int w;
        cin >> w;
        W[i] = w;
        mp[w].push_back(i);
    }
    //
    int tmp = 0;
    for(int i=0;i<N;i++){
        if ( S[i] == '1' ) {
            tmp += 1;
        }
    }
    int ans = tmp;
    for(auto p : mp ) {
        for(auto it : p.second) {
            if ( S[it] == '1' ) {
                tmp -= 1;
            }
            else {
                tmp += 1;
            }
        }
        ans = max(ans, tmp);
    }
    cout << ans << endl;
    return 0;
}