class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        int xDiff = coordinates[1][0] - coordinates[0][0];
        int yDiff = coordinates[1][1] - coordinates[0][1];
        
        for(int i=2;i<n;i++){
            if ((coordinates[i][0] - coordinates[1][0]) * yDiff != (coordinates[i][1] - coordinates[1][1]) * xDiff){
                return false;
            }
        }
        
        return true;
    }
};