#include <bits/stdc++.h>

using namespace std;

long Min(long arr[], int l ,int r, int i){
    if(r-l==1)
    {
        if(arr[i]-arr[l]>0&&arr[i]-arr[r]>0)
            return(min(arr[i]-arr[l],arr[i]-arr[r]));
        else if(arr[i]-arr[l]>0)
            return(arr[i]-arr[l]);
        else if(arr[i]-arr[r]>0)
            return(arr[i]-arr[r]);
        return(pow(10,16));
    }
    else if(l==r)
    {
        if(arr[i]-arr[l]>0)
            return(arr[i]-arr[l]);
        return(pow(10,16));
    }
        int mid=(l+r)/2;
        return(min(Min(arr,l,mid,i),Min(arr,mid+1,r,i)));
}

long minimumLoss(long price[], int n) {
    long loss=pow(10,16);
    for(int i=0;i<n-1;i++)
    {
        if(Min(price,i+1,n-1,i)<loss)
            loss=Min(price,i+1,n-1,i);
    }
    return(loss);
}

int main() {
    int n;
    cin >> n;
    long price[n];
    for(int price_i = 0; price_i < n; price_i++){
       cin >> price[price_i];
    }
    long result = minimumLoss(price,n);
    cout << result << endl;
    return 0;
} 
