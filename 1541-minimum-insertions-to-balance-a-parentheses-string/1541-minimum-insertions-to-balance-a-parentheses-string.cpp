class Solution {
public:
    int minInsertions(string s) {
         int open = 0;
        int insertions = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                open++;
            } 
            else {
                // If this is the first ')' of a pair,
                // we need another ')' immediately after it.
                if (i + 1 < s.length() && s[i + 1] == ')') {
                    i++;  // Consume the second ')'
                } 
                else {
                    insertions++;  // Insert the missing ')'
                }

                // Match the closing pair with an opening '('
                if (open > 0) {
                    open--;
                } 
                else {
                    insertions++;  // Insert a missing '('
                }
            }
        }

        // Each remaining '(' needs two closing parentheses
        insertions += open * 2;

        return insertions;
    }
};