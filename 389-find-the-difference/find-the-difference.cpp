class Solution {
public:
    char findTheDifference(string s, string t) {
        int ascii=0;
        for( char ch:s){
            ascii ^=ch;
        }
        for( char ch:t){
            ascii ^=ch;
        }
        return ascii;
    }
};