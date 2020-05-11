class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        unordered_map<int,vector<int>> hp;
        
        for(auto t:trust){
            hp[t[0]].push_back(t[1]);
        }
        
        int ans = -1;
        
        for(int i=1;i<=N;i++){
            if(!hp.count(i)){
                ans = i;
            }
        }
        
        if(ans == -1){
            return -1;
        }
        
        for(auto val:hp){
            if(val.first != ans){
                int flag = 0;
                for(auto x:val.second){
                    if(x == ans){
                        flag = 1;
                    }
                }  
                if(flag == 0){
                    return -1;
                }
            }
        }
        
        return ans;
    }
};