class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;
        vector<int>res(n);
        vector<int>pre(n),suff(n);

        pre[0]=1;
        suff[n-1]=1;

        int i=1;
        while(i<n){
            pre[i] = nums[i-1]*pre[i-1];
            i++;
        }

        int j = n-2;
        while(j>=0){
            suff[j] = nums[j+1]*suff[j+1];
            j--;
        }

        for(int k=0;k<n;k++){
            res[k] = pre[k]*suff[k];
        }

        return res;
    }
};