//
//  main.cpp
//  1201
//
//  Created by Dong Wook Jung on 22/02/2019.
//  Copyright © 2019 Dong Wook Jung. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    //freopen("/Users/dongwookjung/documents/Practice/Algorithm/input/10610.txt","r",stdin);
    //freopen("/Users/dongwookjung/documents/Practice/FirstTouch/test.txt","r",stdin);
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> ans;
    
    if(m+k-1 <= n && n <= m*k){
        for(int i=1;i<=n;++i)
            ans.push_back(i);
        vector<int> g;
        g.push_back(0);
        g.push_back(k);
        n -= k;
        m -= 1;
        int gs,r;
        
        if(m==0){
            gs=1;
            r=0;
        }
        else{
            gs=n/m;
            r=n%m;
        }
        
        for(int i=0;i<m;++i){
            g.push_back(g.back()+gs+(r>0 ? 1:0));
            if(r>0)
                r-=1;
        }
        
        for(int i=0;i<g.size()-1;++i){
            reverse(ans.begin()+g[i], ans.begin()+g[i+1]);
        }
        for(int &v:ans)
            cout << v << " ";
        cout << "\n";
        
    }
    else
        cout << -1 << "\n";
    
    return 0;
}
