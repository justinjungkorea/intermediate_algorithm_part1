//
//  main.cpp
//  1744_acmicpc
//
//  Created by Dong Wook Jung on 20/02/2019.
//  Copyright © 2019 Dong Wook Jung. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,sum,one;
vector<int> num;
vector<int> positive;
vector<int> negative;
bool zero;


int main(){
    //freopen("/Users/dongwookjung/documents/Practice/Algorithm/input/1744.txt","r",stdin);
    //freopen("/Users/dongwookjung/documents/Practice/FirstTouch/test.txt","r",stdin);
    cin >> n;
    for(int i=0;i<n;++i){
        int temp;
        cin >> temp;
        num.push_back(temp);
    }
    
    for(auto v:num){
        if(v>1){
            positive.push_back(v);
        }
        else if(v==1){
            one +=1;
        }
        else if(v<0){
            negative.push_back(v);
        }
        else{
            zero=true;
        }
    }
    sort(positive.begin(),positive.end(),greater<>());
    sort(negative.begin(),negative.end());
    
    if(positive.size()%2==1){
        positive.push_back(1);
    }
    if(negative.size()%2==1){
        if(zero)    negative.push_back(0);
        else        negative.push_back(1);
    }
    sum = one;
    for(int i=0;i<negative.size();i+=2)
        sum+=(negative[i]*negative[i+1]);
    for(int i=0;i<positive.size();i+=2)
        sum+=(positive[i]*positive[i+1]);
    
    cout << sum << endl;
    
    return 0;
}
