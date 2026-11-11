class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        
        // hashing
        unordered_map<char, int> hashMap;
        
        //traverse first string, here 's'
        for(char i : s){
            hashMap[i]++;
        }

        for(char i : t){
            hashMap[i]--;
            if(hashMap[i] < 0) return false;
        }

        return true;
    }
};
