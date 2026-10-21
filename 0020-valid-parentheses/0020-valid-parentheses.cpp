#include <stack>
#include <string>

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;   // Use std::stack
        
        for (char c : s) {     // Range-based for loop (cleaner)
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);    // Push opening brackets
            } 
            else {
                // Closing bracket
                if (st.empty()) return false;   // No matching open
                
                char top = st.top();
                
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;   // Mismatch
                }
                
                st.pop();   // Match found → pop
            }
        }
        
        return st.empty();   // All brackets matched if stack is empty
    }
};