//
//  main.cpp
//  1080
//
//  Created by Dong Wook Jung on 22/02/2019.
//  Copyright © 2019 Dong Wook Jung. All rights reserved.
//

#include <iostream>

using namespace std;

int arrA[50][50];
int arrB[50][50];
int n,m;
void change(int,int);
bool check();
void func();
void print();
int cnt=0;

int main() {
    //freopen("/Users/dongwookjung/documents/Practice/Algorithm/input/1080.txt","r",stdin);
    //freopen("/Users/dongwookjung/documents/Practice/FirstTouch/test.txt","r",stdin);
    cin >> n >> m;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            scanf("%1d",&arrA[i][j]);
        }
    }
    
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            scanf("%1d",&arrB[i][j]);
        }
    }
    
    func();
    if(check()) cout << cnt << endl;
    else        cout << -1 << endl;
    
    return 0;
}

void change(int a,int b){
    for(int i=a;i<a+3;++i){
        for(int j=b;j<b+3;++j){
            arrA[i][j] = 1 - arrA[i][j];
        }
    }
}

bool check(){
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(arrA[i][j]!=arrB[i][j])
                return false;
        }
    }
    return true;
}

void func(){
    for(int i=0;i<n-2;++i){
        for(int j=0;j<m-2;++j){
            if(arrA[i][j]!=arrB[i][j]){
                change(i, j);
                cnt++;
            }
        }
    }
}

void print(){
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout << arrA[i][j] << " ";
        }
        cout << endl;
    }
    
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout << arrB[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
