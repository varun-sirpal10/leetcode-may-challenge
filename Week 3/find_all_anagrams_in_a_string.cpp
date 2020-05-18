class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> result;
        
        if(s.length() == 0){
            return result;
        }
        
        unordered_map<char,int> hp;
        
        int left = 0;
        int right = 0;
        
        int count = p.length();
        
        for(auto ch:p){
            hp[ch]++;
        }
        
        while(right < s.length()){
            
            if( hp[s[right++]]-- >= 1){
                count--;
            }
            
            if(count == 0){
                result.push_back(left);
            }
            
            if(right - left == p.length() and hp[s[left++]]++ >= 0){
                count++;
            }
        }
        
        return result;
    }
};