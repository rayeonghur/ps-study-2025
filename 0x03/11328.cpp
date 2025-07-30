#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    char arr[26];
    cin >> n;
    for (int i = 0; i < n; i++){
        fill(arr, arr + 26, 0);
        string a, b;
        bool p = true;
        cin >> a >> b;
        for (int j = 0; j < a.size(); j++)
            arr[a[j]-'a']++;
        for (int j = 0; j < b.size(); j++)
            arr[b[j]-'a']--;
        for (int j = 0; j < 26; j++){
            if(arr[j]!=0)
                p = false;
        }
        if(p)
            cout << "Possible\n";
        else
            cout << "Impossible\n";
    }
}
