#include<iostream>

using namespace std;

int main(){

    int arr[8] = {1,2,3,1,2,3,1,2};
    int hash[10] = {0};

    for(int i = 0 ; i < 8 ; i++){
        hash[arr[i]] += 1;
    }

    int num = 1;
    cout<<hash[num];
}