#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t, a[5];
    memset(a, 0, sizeof(a));
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> t;
        a[t]++;
    }
    a[1] -= a[3];
    if (a[1] < 0){
        a[1] = 0;
    }
    cout << a[3] + a[4] + (a[2] + (a[1] + 1) / 2 + 1) / 2);
}
