#include <bits/stdc++.h>
using namespace std;


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        list<char> a;
        auto it=a.end();
        string s;
        cin >> s;
        for(char c:s){
            if(c=='<'&&it!=a.begin()){
                it--;
            }
            else if(c=='>'&&it!=a.end()){
                it++;
            }else if(c=='-'&&it!=a.begin()){
                it = a.erase(--it);
            }
            else if (c != '<' && c != '>' && c != '-'){
                a.insert(it, c);
            }
        }
        for(char c:a)
            cout << c;
        cout << '\n';
    }
}
