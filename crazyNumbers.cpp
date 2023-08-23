#include <bits/stdc++.h> 
using namespace std;

// to only print the given pattern
void print(int n){
    
    int row = 1;
    int var=1;
    
    while(row <= n){
      
    
      int spaces = 1;
      
      while(spaces <= (n - row)){
       
        cout<<" ";
        spaces++;
      }
      int temp = row;
      while(temp != 0){
        
         if(var < 10)
                cout<<(var%10);
            else
                cout<<(var%10) + 1;
            var++;
            temp--;
      }
    
      row++;
      cout<<endl;
  }

}
//2nd method

 /* vector<vector<int>> ans(n, vector<char>(n, 0));
  int num = 1;

  for(int i=0; i<n; i++){
    int col = n - i - 1;
    for(int j=0; j<=i; j++){
      ans[i][col] = num % 10;
      num = (num % 10) + 1;
      col++;
    }
  }

  return ans;
  } 
*/

vector < vector < int > > numberPattern(int n) {
  
  int num = 1;
  vector<vector<int>> ans;
  for(int i=1; i<=n; i++){
    vector<int> row;
   
    for(int space = 1; space<= n - i; space++){
      row.push_back(int(" "));
    }
    for(int j=1; j<=i; j++){
      row.push_back(num);
      num = (num % 9) + 1;
    }

    ans.push_back(row);
  }
  return ans;
}
    
   



