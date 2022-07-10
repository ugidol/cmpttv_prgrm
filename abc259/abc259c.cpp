#include <bits/stdc++.h>
using namespace std;
int main(void){
    string S,T;
    cin >> S >> T ;
    S.push_back('\0');
    T.push_back('\0');
    //
    char &prev = S[0];
    int cnt = 1;
    vector<pair<char,int>> vec1;
    for(unsigned long i=1;i<S.size();i++){
        char &c = S[i];
        if ( c == prev ) {
            cnt += 1;
            continue;
        }
        else {
            pair<char,int> p = make_pair(prev,cnt);
            vec1.push_back(p);
            //
            prev = c;
            cnt = 1;
            continue;
        }
        //
    }
    //
    prev = T[0];
    cnt = 1;
    vector<pair<char,int>> vec2;
    for(unsigned long i=1;i<T.size();i++){
        char &c = T[i];
        if ( c == prev ) {
            cnt += 1;
            continue;
        }
        else {
            pair<char,int> p = make_pair(prev,cnt);
            vec2.push_back(p);
            //
            prev = c;
            cnt = 1;
            continue;
        }
        //
    }
    //
    string ans = "Yes";
    if ( vec1.size() != vec2.size() ) {
        ans = "No";
    }
    else {
        for(unsigned long i = 0;i<vec1.size();i++){
            pair<char,int> &p1 = vec1[i];
            pair<char,int> &p2 = vec2[i];
            if ( p1.first != p2.first ) {
                ans = "No";
                break;
            }
            if ( p1.second == p2.second ) {
                continue;
            }
            if ( p1.second > p2.second ) {
                ans = "No";
                break;
            }
            if ( p1.second < p2.second ) {
                if ( p1.second == 1 ) {
                    ans = "No";
                    break;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}