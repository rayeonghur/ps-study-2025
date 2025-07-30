#include <bits/stdc++.h>
using namespace std;


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    list<char> a;
    char t;
    int n;
    string s;
    cin >> s;
    for(char e: s)
        a.push_back(e);
    auto it = a.end();
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> t; 
        if(t=='L' && it!=a.begin()){
            it--;
        }
        else if(t=='D' && it!=a.end())
            it++;
        else if(t=='B' && it!=a.begin()){
            it=a.erase(--it);
        }else if(t=='P'){
            char add; 
            cin>>add;
            a.insert(it, add);
        }
        
    }
    for(auto e:a)
        cout << e;
}
