
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        unordered_map<char, int> count1, count2;

        for (char c : s1) {
            count1[c]++;
        }

        int m = s1.size();

        for (int i = 0; i < m; i++) {
            count2[s2[i]]++;
        }

        if (count1 == count2) return true;

        for (int i = m; i < s2.size(); i++) {
            count2[s2[i]]++;

            char outgoing = s2[i - m];
            count2[outgoing]--;

            if (count2[outgoing] == 0) {
                count2.erase(outgoing);
            }

            if (count1 == count2) return true;
        }

        return false;
    }
};
