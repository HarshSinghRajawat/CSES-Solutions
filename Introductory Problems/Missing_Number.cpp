#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int findMissingNumber(int array[],int length){
    int missingNumber;

    int sumOfTotalNumber= length*(length+1)/2;

    for(int i=0;i<length-1;i++ ){
        sumOfTotalNumber-=array[i];
    }
    missingNumber= sumOfTotalNumber;
    return missingNumber;
}

main(){
    int length;
    cin>>length;

    int array[length];

    for(int i=0;i<length-1;i++){
        cin>>array[i];
    }

    cout<<"Missing Number is "<<findMissingNumber(array,length);
}