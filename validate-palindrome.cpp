

class Solution {
public:
    bool isPalindrome(string s) {
        string rev = "";
        
        for (int i = s.size() - 1; i > -1; i--){
            char curr = s[i];
            bool isUpperLetter = (curr >= 65 && s[i] <= 90);
            bool isLowerLetter = (curr >= 97 && s[i] <= 122);
            bool isNum = (curr >= 48 && curr <= 57);
            
            if ( isLowerLetter || isUpperLetter || isNum){
                if(isUpperLetter){
                    s[i] = static_cast<char>(curr + 32);
                    curr = s[i];
                }
                rev += curr;
            }else{
                s.erase(i, 1);
            }
        }
        cout<< s << "\t"<< rev<< endl;
        return s == rev;
        }
};
