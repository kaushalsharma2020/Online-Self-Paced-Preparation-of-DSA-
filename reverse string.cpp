class Solution {
public:
    string reverseWords(string s) {
        
        stringstream sso(s);
        
        vector<string> words;
        
        string buffer;
        
        while (sso >> buffer)
            words.push_back(buffer);
        
        string res;
        
        for (int i = words.size()-1; i > -1; i--)
            res += words[i] + " ";
        
        res.pop_back();
        
        return res;
    }
};
