//
//  main.cpp
//  11047
//
//  Created by Dong Wook Jung on 14/02/2019.
//  Copyright © 2019 Dong Wook Jung. All rights reserved.
//

#include <iostream>

using namespace std;

int n,k,ans;
int coin[11];

int cal();

int main() {
    //freopen("/Users/dongwookjung/documents/Practice/Algorithm/input/11047.txt","r",stdin);
    //freopen("/Users/dongwookjung/documents/Practice/FirstTouch/test.txt","r",stdin);
    
    cin >> n >> k;
    for(int i=0;i<n;++i){
        cin >> coin[i];
    }
    cout << cal() << endl;
    
    
    return 0;
}

int cal(){
    ans=0;
    for(int i=n;i>=0;--i){
        ans+=k/coin[i-1];
        k%=coin[i-1];
        if(k==0)    break;
    }
    
    return ans;
}
