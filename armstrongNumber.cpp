#include<iostream>
#include<math.h>
using namespace std;

bool checkArmstrong(int n){

    cin>>n;
    int tp = n, tp1 = n;
    int cnt = 0, digit = 0, sum = 0;
    
    while(tp != 0)
    {
        cnt++;
        tp /= 10;
    }

    while(tp1 != 0){
        
        digit = tp1 % 10;
         sum += pow(digit, cnt);
         tp1 /= 10;
    }
	if(sum == n)
		return true;
	else	return false;
}
