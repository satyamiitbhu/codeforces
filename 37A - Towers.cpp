#include<bits/stdc++>
using namespace std;
int n,h = 1, u, he = 1;
vector<int>l(1001)
int main() {
    cin >> n;
    u = n;
    for (int i = 0; i < n; i++) {
        
        cin >> l[i];
    }
    sort(l, l + n);
    for (int i = 1; i < n; i++) {
        if (l[i] == l[i - 1]) {
            h++;
            u--;
        } else {
            h = 1;
        }
        he = max(he, h);
    }
    cout << he << " " << u;
}
