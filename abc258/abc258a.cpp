#include <bits/stdc++.h>
using namespace std;
int main(void){
    int K;
    cin >> K ;
    int h = 21 + ( K / 60 );
    int m = 0  + ( K % 60 );
    fprintf(stdout,"%02d:%02d\n",h,m);

    return 0;
}