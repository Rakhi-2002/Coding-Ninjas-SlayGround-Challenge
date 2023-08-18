#include<bits/stdc++.h>
using namespace std;

void getVector(vector<int> &ans, int x, int i){
    if(i > x)
        return;
    
    ans.push_back(i);
    i++;
    getVector(ans, x, i);
}

vector<int> printNos(int x) {
    vector<int> ans;
    getVector(ans, x, 1);
    return ans;

}