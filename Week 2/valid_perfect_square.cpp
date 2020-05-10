class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1){
            return true;
        }
        
        int start = 0;
        int end = num/2;
        
        while(start <= end){
            double mid = start + (end-start)/2;
            
            if(mid == num/mid){
                return true;
            }
            
            else if(mid > num/mid){
                end = mid - 1;
            }
            
            else{
                start = mid + 1;
            }
        }
        
        return false;
    }
};