#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void printPermutations(int N){
    vector<int> result;
    int i=N;
    while(i>0){
        cout<<i;
        i^=1;
        i--;
    }

}

main(){
    int n;
    cout<<"Enter Length of Permutation -> ";
    cin>>n;

    printPermutations(n);
}