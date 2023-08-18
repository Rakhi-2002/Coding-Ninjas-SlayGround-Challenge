#include<iostream>
using namespace std;

string compareIfElse(int a, int b) {

	if(a == b)
		return "equal";
	else	
		return a>b ? "greater" : "smaller";
}
