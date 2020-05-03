class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char,int> hp;
        
        for(char ch:magazine){
            if(hp.count(ch)){
                hp[ch]++;
            }
            else{
                hp[ch] = 1;
            }
        }
        
        for(char ch2:ransomNote){
            if(hp[ch2] > 0){
                hp[ch2]--;
            }
            else{
                return false;
            }
        }
        
        return true;
    }
};