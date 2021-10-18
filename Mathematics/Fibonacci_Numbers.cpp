#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int getFibValue(int length){

    if(length<=1){
        return length;
    }
    return getFibValue(length-1)+getFibValue(length-2);
    
}
void printFibSeries(int length){
    int prev=0,current=1,sum;
    for(int i=0;i<length;i++){
        cout<<current<<",";
        sum=prev+current;
        prev=current;
        current=sum;
    }
}
main(){
    int n;
    cin>>n;
    printFibSeries(n);
    cout<<endl<<"Result-> "<<getFibValue(n);
}