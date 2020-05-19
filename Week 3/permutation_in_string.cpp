class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> hp1(26,0);
       
        for(auto ch:s1){
            hp1[ch-'a']++;
        }
        
        bool ans = false;
        
        for(int i=0;i<s2.length();i++){
            
            vector<int> hp2(26,0);
            
            for(char ch2:s2.substr(i,s1.length())){
                hp2[ch2-'a']++;
            }
            
            if(hp2 == hp1){
                ans = true;
                break;
            }
        }
        
        return ans;
    }
};