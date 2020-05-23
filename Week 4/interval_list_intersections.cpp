class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        
        int i=0,j=0;
        
        vector<vector<int>> result;
        
        while(i < A.size() and j < B.size()){
            
            int start = max(A[i][0],B[j][0]);
            int end = min(A[i][1],B[j][1]);
            
            vector<int> res = {start,end};
            
            if(start <= end){
                result.push_back(res);
            }
            
            if(A[i][1] < B[j][1]){
                i++;
            }
            else{
                j++;
            }
        }
        
        return result;
        
    }
};