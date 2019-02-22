//
//  main.cpp
//  1783
//
//  Created by Dong Wook Jung on 21/02/2019.
//  Copyright © 2019 Dong Wook Jung. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int n,m;

int main() {
    //freopen("/Users/dongwookjung/documents/Practice/Algorithm/input/10610.txt","r",stdin);
    //freopen("/Users/dongwookjung/documents/Practice/FirstTouch/test.txt","r",stdin);
    cin >> n >> m;
    
    if(n==1){
        cout << 1 << endl;
    }
    else if(n==2){
        cout << min(4,(int)(m+1)/2) << endl;
    }
    else if(m>=7){
        cout << m-2 << endl;
    }
    else{
        cout << min(4,m) << endl;
    }
    
    return 0;
}
