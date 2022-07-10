#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N,K,Q;
    cin >> N >> K >> Q;
    set<int> st;
    vector<int> A(K+1,0);
    for(int i=1;i<K+1;i++){
        cin >> A[i];
        st.insert(A[i]);
    }
    for(int i=0;i<Q;i++){
        int l;
        cin >> l;
        int pos = A[l];
        // 一番右のマスにあるなら、なにも行わない.
        if ( pos == N ) {
            continue;
        }
        int next = pos + 1;
        // １つ右のマスにコマがあるかな？
        if ( st.find(next) != st.end() ) {
            // あるので、なにも行わない.
        }
        else {
            // ないので、
            // コマを移動させる.
            A[l] = next;
            st.erase(pos);
            st.insert(next);
        }
    }
    // ans
    for(int i=1;i<K+1;i++){
        cout << A[i] << ' ';
    }
    cout << endl;
    return 0;
}