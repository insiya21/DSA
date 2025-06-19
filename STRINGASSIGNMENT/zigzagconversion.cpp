class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s; 
        vector<string> zigzag(numRows);  
        int i = 0, row = 0;
        bool direction = 1;  //top-bottom
        while (i<s.size()) {
            if (direction) {
                while (row < numRows && i < s.size()) {
                    zigzag[row++].push_back(s[i++]);
                }
                row = numRows - 2;  // After reaching the last row, move to the second last row
            }
            // Going up
            else {
                while (row >= 0 && i < s.size()) {
                    zigzag[row--].push_back(s[i++]);
                }
                row = 1;  // After reaching the top row, move to the second row
            }
            direction = !direction;  // Alternate the direction
        }
        string ans = "";
        for (int i = 0; i < zigzag.size(); i++) {
            ans += zigzag[i]; 
        }
        return ans;
    }
};
