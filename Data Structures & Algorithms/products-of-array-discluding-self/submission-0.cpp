class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;
        vector<int>res;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j!=i){
                    ans *= nums[j];
                }
            }

            res.push_back(ans);
            ans = 1;
            
        }

        return res;
    }
};
