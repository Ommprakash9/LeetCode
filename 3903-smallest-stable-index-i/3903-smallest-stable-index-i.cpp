#include<bits/stdc++.h>
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int minn = INT_MAX;
        int maxx = INT_MIN;
        unordered_map<int,int> minmap;

        for(int i = n - 1 ; i >= 0 ;i--){
            minn = min(minn, nums[i] );
            minmap[i] = minn;
        }

        for(int i = 0 ; i<n;i++){
            maxx = max(maxx,nums[i]);

            //MIN element kadhiba pain map ru refer kariba
            int diff = maxx - minmap[i];
            if(diff<=k) return i;
        }
        return -1;
    }
};