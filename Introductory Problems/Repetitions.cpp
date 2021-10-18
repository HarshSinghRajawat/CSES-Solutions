#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int getHighestOccurenceChar(string str){

    unordered_map<char,int> map;
    int result=0;

    for(int i=0;i<str.length();i++){
        map[str[i]]++;
    }


    for(auto x:map){
        if(x.second>result){
            result=x.second;
        }
    }

    return result;

}

main(){
    string input;

    cout<<"Enter String -> ";
    cin>>input;

    cout<<"Output -> "<<getHighestOccurenceChar(input);
}