#include<bits/stdc++.h>
using namespace std;
int main(){
    int a , b ;
    cin>>a>>b;
    int small = a<b?a:b;
    int big = a>b?a:b;

    while(big%small!=0){
        int temp = big%small ;
        big = small ;
        small = temp ;
    }
    cout<<small;
}

//  Euclids Algorithm is used find GCD of two numbers with minimum time complexity
//  Time complexity of Euclids Algorithm is O(log(min(a,b)));
//  Dry run with a = 35 and b = 15
//  Answer is 5