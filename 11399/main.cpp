//
//  main.cpp
//  11399
//
//  Created by Dong Wook Jung on 18/02/2019.
//  Copyright © 2019 Dong Wook Jung. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,sum,ans;
vector<int> waiting;
int wt[10001];

int main() {
    //freopen("/Users/dongwookjung/documents/Practice/Algorithm/input/11399.txt","r",stdin);
    //freopen("/Users/dongwookjung/documents/Practice/FirstTouch/test.txt","r",stdin);
    
    cin >> n;
    for(int i=0;i<n;++i){
        int temp;
        cin >> temp;
        waiting.push_back(temp);
    }
    
    sort(waiting.begin(),waiting.end());
    
    for(int i=0;i<n;++i){
        sum+=waiting[i];
        wt[i]=sum;
    }
    ans=0;
    for(int i=0;i<n;++i){
        ans+=wt[i];
    }
    cout << ans << endl;
    
    return 0;
}
