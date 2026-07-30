class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res = 0;

        for(int i=0;i<heights.size();i++){
            for(int j=i+1;j<heights.size();j++){
                int h = min(heights[i],heights[j]);
                int w = j-i;
                res = max(res,h*w);
            }
        }

        return res;
    }
};
