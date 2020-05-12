class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] == newColor) return image;
        
        helper(image,sr,sc,image[sr][sc],newColor);
        
        return image;
    }
    
    void helper(vector<vector<int>>& image, int sr, int sc, int color, int newColor){
        
        if(sr < 0 or sc < 0 or sr >= image.size() or sc >= image[0].size() or image[sr][sc] != color){
            return;
        }
        
        image[sr][sc] = newColor;
        
        helper(image,sr-1,sc,color,newColor);
        helper(image,sr+1,sc,color,newColor);
        helper(image,sr,sc+1,color,newColor);
        helper(image,sr,sc-1,color,newColor);
    }
};