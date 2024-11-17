#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s;

    //Precompute

    int hash[256] = {0};

    for(int i = 0 ; i < s.size() ; i++){
        hash[s[i] - 'a']+= 1;
        // we can also de hash[s[i]]
        // It cast it into integer
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;

        cout<<hash[c - 'a']<<endl;
    }

    return 0;
}