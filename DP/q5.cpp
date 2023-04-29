int n=nums.size();
        vector<int> dp(n, -1);
        dp[0]=nums[0];
        for(int i=1; i<n; i++){
            if(dp[i-1]>0){
                dp[i]=max(dp[i-1]-1, nums[i]);
            }
            else{
                dp[i]=-1;
            }
        }
        if(dp[n-1]!=-1){
            return true;
        }
        return false;

    }