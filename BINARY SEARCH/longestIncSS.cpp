int lengthOfLIS(vector<int>& nums) {
        vector<int> sub;
        int n=nums.size();
        for(auto i: nums){
            if(sub.size()==0||(i>sub[sub.size()-1])){
                sub.push_back(i);
            }
            else{
                auto it=lower_bound(sub.begin(), sub.end(), i);
                    *it=i;    
            }
        }
        return sub.size();
    }