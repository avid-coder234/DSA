#include<vector>
#include<bits/stdc++.h>
using namespace std;
void printF(int index,int arr[],vector<int> &ds,int n){
    if(index == n){
        for(auto i : ds){
            cout<< i << " ";
        }
        cout<<endl;
        return;
    }
// To include the element at the given index
    ds.push_back(arr[index]);
    printF(index + 1,arr,ds,n);
    ds.pop_back();

// To exclude the element at the given index
    printF(index + 1,arr,ds,n);
}
int main(){
    int arr[] = { 3,1,2};
    int n = 3;
    vector<int> ds;  
    printF(0,arr,ds,n);
}