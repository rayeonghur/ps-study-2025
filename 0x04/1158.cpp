#include <bits/stdc++.h>
using namespace std;


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin >> n>>k;
    list<int> arr;
    
    for(int i=1; i<=n; i++)
        arr.push_back(i);
    cout << "<";
    auto it = arr.begin();
    while(arr.size()){
        for (int i = 0; i < k-1; i++){
            it++;
            if(it==arr.end())
                it = arr.begin();
        }
        if (arr.size() == 1)
        {
            cout << *it;
        }
        else
            cout << *it << ", ";
        it= arr.erase(it);
        if(it==arr.end())
            it = arr.begin();
    }
    cout << ">";
}
