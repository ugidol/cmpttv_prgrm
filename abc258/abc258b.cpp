#include <bits/stdc++.h>
using namespace std;
int mv[8][2] = { {1,0},{0,1},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
string func(vector<vector<char>> &vec, int xx, int yy, int n){
    vector<string> ret(8);
    for(int i=0;i<8;i++){
        int x = xx;
        int y = yy;
        string s ;
        for(int k=0;k<n;k++){
            char c = vec[x][y];
            s.push_back(c);
            x += mv[i][0] ;
            x = ( x + n ) % n ;
            y += mv[i][1] ;
            y = ( y + n ) % n ;
        }
        ret[i] = s;
    }
    return *max_element(ret.begin(),ret.end());
}
int main(void){
    int N;
    cin >> N;
    vector<vector<char>> vec(N,vector<char>(N));
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> vec[i][j];
        }
    }
    //
    string ans = "";
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            ans = max(ans,func(vec,i,j,N));
        }
    }
    //
    cout << ans << endl;
    //
    return 0;
}