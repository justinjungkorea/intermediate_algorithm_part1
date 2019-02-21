//
//  main.cpp
//  1541
//
//  Created by Dong Wook Jung on 18/02/2019.
//  Copyright © 2019 Dong Wook Jung. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string line;
vector<int> num;
vector<int> op;
int data,ans;

int main(){
    //freopen("/Users/dongwookjung/documents/Practice/Algorithm/input/1541.txt","r",stdin);
    //freopen("/Users/dongwookjung/documents/Practice/FirstTouch/test.txt","r",stdin);
    
    
    cin >> line;
    
    op.push_back(1);
    for(int i=0;i<line.length();++i){
        if(line[i]=='+'){
            op.push_back(1);
            num.push_back(data);
            data=0;
        }
        else if(line[i]=='-'){
            op.push_back(-1);
            num.push_back(data);
            data=0;
        }
        else{
            data = data*10+(line[i]-'0');
        }
    }
    num.push_back(data);
    
    bool flag=false;
    
    for(int i=0;i<num.size();++i){
        if(op[i]==-1)   flag=true;
        if(!flag)    ans += num[i];
        else         ans -= num[i];
    }
    
    cout << ans << endl;
    
    return 0;
}
