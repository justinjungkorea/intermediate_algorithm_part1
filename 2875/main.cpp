//
//  main.cpp
//  2875
//
//  Created by Dong Wook Jung on 21/02/2019.
//  Copyright © 2019 Dong Wook Jung. All rights reserved.
//

#include <iostream>

using namespace std;

int n,m,k;

int main() {
    //freopen("/Users/dongwookjung/documents/Practice/Algorithm/input/2875.txt","r",stdin);
    //freopen("/Users/dongwookjung/documents/Practice/FirstTouch/test.txt","r",stdin);
    
    cin >> n >> m >> k;
    
    int team = 0;
    while(true){
        if( (n+m)>=k+3 && n>1 && m>0){
            team++;
            n-=2;
            m-=1;
        }
        else{
            break;
        }
    }
    cout << team << endl;
    
    return 0;
}
