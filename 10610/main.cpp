//
//  main.cpp
//  10610
//
//  Created by Dong Wook Jung on 21/02/2019.
//  Copyright © 2019 Dong Wook Jung. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string input;
bool zero = false;
vector<int> num;

int main() {
    //freopen("/Users/dongwookjung/documents/Practice/Algorithm/input/10610.txt","r",stdin);
    //freopen("/Users/dongwookjung/documents/Practice/FirstTouch/test.txt","r",stdin);
    
    cin >> input;
    int sum=0;
    for(int i=0;i<input.length();++i){
        int temp = input[i]-'0';
        num.push_back(temp);
        sum+=temp;
        if(temp==0) zero = true;
    }
    sort(num.begin(),num.end(),greater<int>());
    
    if(!zero || sum%3!=0){
        cout << -1 << endl;
        return 0;
    }
    
    for(auto v:num)
        cout << v;
    cout << endl;
    
    return 0;
}

