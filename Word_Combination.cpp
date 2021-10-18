#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void getCombinations(string goal,vector<string> words){
    
}

main(){
    string str,word;
    int n;
    cin>>str>>n;

    vector<string> words;
    while(n--){
        cin>>word;
        words.push_back(word);
    }
    getCombinations(str,words);
}