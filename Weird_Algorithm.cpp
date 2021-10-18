#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void startAlgorithm(int n){
    cout<<"->"<<n;
    if(n>1){

        if(n%2==0){
            n=n/2;
        }else{
            n=n*3+1;
        }

        startAlgorithm(n);
    }
}

main(){
    int N;
    cin>>N;
    startAlgorithm(N);
}