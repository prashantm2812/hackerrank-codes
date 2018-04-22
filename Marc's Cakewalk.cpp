#include <bits/stdc++.h>

using namespace std;
void insertsort(int arr[],int n){
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int key=arr[i];
        while(j>=0&&arr[j]<key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
long marcsCakewalk(int calorie[],int n) {
    insertsort(calorie,n);
    long sum=0;
    for(int i=0;i<n;i++)
        sum+=(calorie[i]*pow(2,i));
    return(sum);
}

int main() {
    int n;
    cin >> n;
    int calorie[n];
    for(int calorie_i = 0; calorie_i < n; calorie_i++){
       cin >> calorie[calorie_i];
    }
    long result = marcsCakewalk(calorie,n);
    cout << result << endl;
    return 0;
}

