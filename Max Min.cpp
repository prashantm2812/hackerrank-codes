#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int angryChildren(int k, int arr[],int n) {
    sort(arr,arr+n);
    int mindiff=arr[n-1]-arr[0];
    for(int i=0;i<n-k;i++)
    {
        if(arr[i+k-1]-arr[i]<mindiff)
            mindiff=arr[i+k-1]-arr[i];
    }
    return(mindiff);
}

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = angryChildren(k, arr,n);
    cout << result << endl;
    return 0;
} 
