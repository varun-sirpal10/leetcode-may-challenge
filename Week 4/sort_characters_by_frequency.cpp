class Solution {
public:
    class Compare{
    public:
        bool operator()(pair<char,int> p1, pair<char,int> p2){
            return p1.second < p2.second;
        }    
    };
    
    string frequencySort(string s) {
        
        unordered_map<char,int> freq;
        
        string str = "";
        
        for(char ch:s){
            freq[ch]++;
        }
        
        priority_queue<pair<char,int>, vector<pair<char,int>>, Compare> pq;
        
        for(auto val:freq){
            pq.push(val);
        }
        
        while(!pq.empty()){
            int count = pq.top().second;
            char ch = pq.top().first;
            pq.pop();
            while(count--){
                str += ch;    
            }
        }
        
        return str;
        
    }
};