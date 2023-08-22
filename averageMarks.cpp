#include <bits/stdc++.h> 
#include <utility>
using namespace std;

pair<char, int> averageMarks(char firstLetterOfName, int m1, int m2, int m3) {

    return {firstLetterOfName, (m1+m2+m3)/3};
}
