class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos = -1;

        for (int i = 0; i < haystack.size(); i++){
            string wouldBeNeedle = haystack.substr(i, needle.size());
            bool needleFound = wouldBeNeedle == needle;
            if (needleFound){
                pos = i;
                break;
            }
        }
        return pos;
    }
};
