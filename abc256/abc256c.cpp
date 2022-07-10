#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> func(int value){
    vector<vector<int>> vec(0,vector<int>(3));
    for(int i=1;i<=value;i++){
        for(int j=i;i+j<=value;j++){
            for(int k=j;i+j+k<=value;k++){
                if ( i + j + k == value ) {
                    vector<int> v({i,j,k});
                    do {
                        vec.push_back(v);
                    }while(next_permutation(v.begin(),v.end()));
                }
            }
        }
    }
    return vec;
}
int main(void){
    vector<int> H(3);
    for(int i=0;i<3;i++){
        cin >> H[i];
    }
    vector<int> W(3);
    for(int i=0;i<3;i++){
        cin >> W[i];
    }
    //
    long int ans = 0;
    vector<vector<int>> vec1 = func(H[0]);
    vector<vector<int>> vec2 = func(H[1]);
    vector<vector<int>> vec3 = func(H[2]);
    for(auto v1 : vec1 ){
        for(auto v2 : vec2 ){
            for(auto v3 : vec3){
                if ( v1[0] + v2[0] + v3[0] == W[0] ) {
                    if ( v1[1] + v2[1] + v3[1] == W[1] ) {
                        if ( v1[2] + v2[2] + v3[2] == W[2] ) {
                            ans += 1;
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}