#include <bits/stdc++.h>

using namespace std;

string twoArrays(int k, int A[],int B[],int n) {
    sort(A,A+n); 
    sort(B,B+n,greater<int>());
    int check=1;
    for(int i=0;i<n;i++)
    {
        if(A[i]+B[i]<k)
        {
            check=0;
            break;
        }
    }
    if(check==1)
        return("YES");
    return("NO");
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        int k;
        cin >> n >> k;
        int A[n];
        for(int A_i = 0; A_i < n; A_i++){
           cin >> A[A_i];
        }
        int B[n];
        for(int B_i = 0; B_i < n; B_i++){
           cin >> B[B_i];
        }
        string result = twoArrays(k, A, B, n);
        cout << result << endl;
    }
    return 0;
} 
