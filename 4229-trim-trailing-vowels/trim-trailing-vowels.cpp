class Solution {
public:
    string trimTrailingVowels(string s) {
        while(s.length()!=0){
            if(s[s.length()-1]=='a' || s[s.length()-1]=='e' || s[s.length()-1]=='i' || s[s.length()-1]=='o' || s[s.length()-1]=='u') s.pop_back();
            else break;
        }
        return s;
    }
};