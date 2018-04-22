#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(; t; t--){
        int n;
        cin >> n;
        int r=((2*n)%3)*5;
        if(r>n)
            cout<<"-1";
        else{
        for(int i=0;i<n-r;i+=3)
               cout<<"555";
        for(int i=0;i<r;i+=5)
            cout<<"33333";
        }
        cout<<endl;
/*        int noof3=0;// correct soln.
        while(n%3!=0)
        {
            n-=5;
            noof3+=5;
        }
        if(n<0)
            cout<<"-1"<<endl;
        else
        {
            for(int i=0;i<n;i++)
                cout<<"5";
            while(noof3>0)
            {
                cout<<"33333";
                noof3-=5;
            }
            cout<<endl;
        }*/
    }
    return 0;
} 
