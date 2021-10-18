#include<iostream>
#include <bits/stdc++.h>
using namespace std;

string getPalindrome(string str){
    //counting occurences of char
    unordered_map<char,int> map;

    for(int i=0;i<str.length();i++){
        map[str[i]]++;
    }

    //find number of oddChars 
    int oddCount=0;
    char oddChar;

    for(auto x:map){
        if(x.second % 2 != 0){
            oddCount++;
            oddChar=x.first;
        }
    }

    if(oddCount > 1 || oddChar == 1 && str.length() % 2 == 0 ){
        return "No Palindrome";
    }

    string firstHalf="";
    string secondHalf="";

    for(auto x: map){
        string s(x.second/2,x.first);
        firstHalf=firstHalf+s;
        secondHalf=s+secondHalf;

        cout<<"Processing - > string = "<<s<<", length = "<<s.length()<<", FirstHalf = "<<x.first<<", SecondHalf = "<<x.second<<endl;
    }

    return (oddCount == 1)?(firstHalf+oddChar+secondHalf):(firstHalf+secondHalf);



}
int main(){
    
    string s;
    cout<<"Enter String";
    cin>>s;
    string result=getPalindrome(s);
    cout<<"Result -> "<<result;
    
    return 0;
}