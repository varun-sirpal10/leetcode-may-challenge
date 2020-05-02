class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        unordered_map<char,int> hp;
        
        int ans=0;
        
        for(char ch:J){
            hp[ch] = 1;
        }
        
        for(char ch:S){
            if(hp.count(ch)){
                ans++;
            }
        }
        
        return ans;
    }
};