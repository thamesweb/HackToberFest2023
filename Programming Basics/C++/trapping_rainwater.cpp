#include <bits/stdc++.h>
using namespace std;

//naive solution (time: O(n^2))
int sol(vector<int> arr){
    int n = arr.size(), res = 0;
    
    for(int i = 1; i < n-1; i++){
        //finding leftMax for arr[i]
        int lmax = arr[i];
        for(int j = 0; j < i; j++){
            lmax = max(arr[j], lmax);
        }
        //finding rightMax for arr[i]
        int rmax = arr[i];
        for(int j = i+1; j < n; j++){
            rmax = max(arr[j], rmax);
        }
        //updating result
        res += min(rmax, lmax) - arr[i];
    }
    return res;
}

//efficient solution  (time: O(n))
int getWater(vector<int> arr){
    int n = arr.size();
    //storing leftMax and rightMax for every element in an array
    vector<int> lmax(n), rmax(n);

    lmax[0] = arr[0];
    for(int i = 1; i < n; i++){
        lmax[i] = max(arr[i], lmax[i-1]);
    }
    rmax[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; i--){
        rmax[i] = max(arr[i], rmax[i+1]);
    }

    //computing the final result
    int res = 0;
    for(int i = 1; i < n-1; i++){
        res += min(lmax[i], rmax[i]) - arr[i];
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int n; cin>> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin>> arr[i];

    cout<< getWater(arr)<<endl;
    
    return 0;
}
