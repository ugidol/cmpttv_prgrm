#include <bits/stdc++.h>
using namespace std;
int N;
//set<int> total;
vector<int> total;
multiset<int> adult;
multiset<int> child;
int func(int w){
    auto childp = lower_bound(child.begin(), child.end(), w);
    // 実際の子供の人数
    int num_of_child = distance(child.begin(), childp);

    auto adultp = lower_bound(adult.begin(), adult.end(), w);
    // 実際の大人の人数
    int num_of_adult = adult.size() - distance(adult.begin(),adultp);

    return num_of_child + num_of_adult ;
}
int main(void){
    cin >> N;
    string S;
    cin >> S;
    vector<int> W(N);
    int mx = 0;
    for(int i=0;i<N;i++){
        cin >> W[i];
        total.push_back(W[i]);
        // '0' は子供
        if ( S[i] == '0' ) {
            child.insert(W[i]);
        }
        else {
            adult.insert(W[i]);
        }
        //
        mx = max(mx,W[i]);
    }
    total.push_back(mx+1);
    sort(total.begin(), total.end());
    //
    int ans = 0;
    for(auto w : total ) {
        int tmpans = func(w);
        ans = max({ans, tmpans });
    }
    //

    cout << ans << endl;
    return 0;
}