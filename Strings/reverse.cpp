class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size() - 1;

        while(start < end){
            swap(s[start++],s[end--]);
        }
    }
};

// ToLowerCASE

char tolowercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }else{
        char temp = ch - 'A' + 'a';
    }
}

    
