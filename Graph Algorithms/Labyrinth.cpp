#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void findPath(){
    
}

main(){
    vector<vector<int>> map;
    int r,c;
    cin>>r>>c;

    for(int i=0;i<r;i++){
        vector<int> column;
        for(int j=0;j<c;j++){
            
            int n;
            cin>>n;
            column.push_back(n);
        }

        map.push_back(column);

    }


    for(int i=0;i<map.size();i++){
        vector<int> column=map.at(i);
        
        for(int j=0;j<column.size();j++){
            cout<<column.at(j);
        }
        cout<<endl;
    }
    
}