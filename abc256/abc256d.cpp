#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    cin >> N;
    vector<pair<int,int>> LR(N);
    for(int i=0;i<N;i++){
        int L,R;
        cin >> L >> R;
        pair<int,int> p = make_pair(L,R);
        LR[i] = p;
    }
    //
    sort(LR.begin(), LR.end());
    vector<pair<int,int>> vec;
    //
    for(int i=0;i<N;i++){
        pair<int,int> p = LR[i];
        bool mrgd = false;
        for(unsigned long j=0;j<vec.size();j++){
            pair<int,int> &it = vec[j];
            int mx = max(it.first,p.first);
            int mn = min(it.second,p.second);
            if ( mx <= mn ) {
                // 区間重複しているので、マージする.
                it.first = min(it.first,p.first);
                it.second = max(it.second,p.second);
                //
                mrgd = true;
                break;
            }
        }
        //
        if ( ! mrgd ) {
            vec.push_back(p);
        }
    }
    for(auto it : vec){
        cout << it.first << ' ' << it.second << endl;
    }
    return 0;
}