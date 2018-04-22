#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int m=n,r,count=0;
        while(m!=0){
            r=m%10;
            if(r!=0){
               if(n%r==0)
               count++;
            }
            m=m/10;
        }
        cout<<count<<endl;
    }
    return 0;
} 
