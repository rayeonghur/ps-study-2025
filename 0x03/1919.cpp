#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[26] = {0}, num=0;
    string s1, s2;
    cin >> s1 >> s2;
    for(auto i:s1)
        a[i - 'a']++;
    for(auto i:s2) 
        a[i-'a']--;
    for (int i:a)
        num += abs(i);
    cout << num; 
}
