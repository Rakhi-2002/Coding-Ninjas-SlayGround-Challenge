#include<iostream>
#include<string.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    if(n == 1)
        return 1;
    if(n == 2)
        return 11;
    
    string s = "11";
    int cnt;
    string temp;

    for(int i=3; i<=n; i++){
        temp = "";
        s = s+'$';
        cnt = 1;
        for(int j=1; j<s.length(); j++){
            if(s[j] != s[j-1]){
                temp += to_string(cnt); 
                temp += s[j-1];
                cnt = 1;
                
            }
            else{
                cnt++;
            }
        }
        s = temp;
    }

    cout<<s<<endl;
    return 0;
}