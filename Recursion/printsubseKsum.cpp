#include<bits/stdc++.h>
#include<vector>
using namespace std;
void PrintF(int index , int arr[] , vector<int> &ds,int n,int sum,int s){
    if(index == n){
        if(s == sum){
            for(auto it : ds){
                cout<< it <<" ";
                cout<<endl;
            }
        }
    }

    // To pick the element 

    ds.push_back(arr[index]);
    s += arr[index];
    PrintF(index + 1,arr,ds,n,sum,s);

    s -+ arr[index];
    ds.pop_back();
    PrintF(index + 1,arr,ds,n,sum,s);



}


int main(){

} 