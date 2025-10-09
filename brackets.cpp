class Solution {
public:
  bool isValid(string s) {
    int len = s.size();
    int iter = 0;
    while (iter < len) {
      char prev = s[iter - 1];
      char curr = s[iter];
      if ((prev == '(' & curr == ')') || (prev == '[' & curr == ']') ||
          (prev == '{' & curr == '}')) {
        cout << prev << curr << endl;
        s.erase(iter - 1, 2);
        iter = 0;
        cout << s << endl;
      }
      iter++;
    }
    if (s.size() != 0) {
      return false;
    }
    return true;
  }
};


// Corrections

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                stk.push(c);
            } else {
                if (stk.empty()) return false;
                char top = stk.top();
                if ((c == ')' && top != '(') ||
                    (c == ']' && top != '[') ||
                    (c == '}' && top != '{')) {
                    return false;
                }
                stk.pop();
            }
        }
        return stk.empty();
    }
};

