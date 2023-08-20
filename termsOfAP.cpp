#include <bits/stdc++.h> 
#include <vector>
using namespace std;

vector < int > termsOfAP(int x) {
    
    vector<int> ans;
    int cnt1 = 1, cnt2 = 1;
    
    while(cnt1 <= x){
        
        int val =3*cnt2 + 2;
        if(val % 4 != 0){
            ans.push_back(val);
            cnt1++;
        }
            cnt2++;
    }
    return ans;
}
