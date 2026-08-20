class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int currsum =0,result =0;
        unordered_map<int,int>mp;
        mp.insert({0,1});
        for(int i =0;i<nums.size();i++){
            currsum += nums[i];
            if(mp.find(currsum -k)!= mp.end()){
                result += mp[currsum -k];
            }
            mp[currsum]++ ;

        }
        return result;
        
    }
};