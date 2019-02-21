//
//  main.cpp
//  1931
//
//  Created by Dong Wook Jung on 15/02/2019.
//  Copyright © 2019 Dong Wook Jung. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<pair<int,int>> meeting;
vector<pair<int,int>> answer;

bool cmp(const pair<int, int> &u, const pair<int,int> &v){
    if(u.second == v.second){
        return u.first < v.first;
    }
    else{
        return u.second < v.second;
    }
}

int main() {
    //freopen("/Users/dongwookjung/documents/Practice/Algorithm/input/1931.txt","r",stdin);
    //freopen("/Users/dongwookjung/documents/Practice/FirstTouch/test.txt","r",stdin);
    
    cin >> n;
    for(int i=0;i<n;++i){
        int start,finish;
        cin >> start >> finish;
        meeting.push_back({start,finish});
    }
    int ans=0;
    sort(meeting.begin(),meeting.end(),cmp);
    int temp=0;
    for(auto v:meeting){
        if(temp <= v.first){
            ans++;
            temp = v.second;
        }
    }
    
    cout << ans << endl;
    
    
    return 0;
}
