// class Solution {
// public:
//     int findPairs(vector<int>& nums, int k) {
//         sort(nums.begin(),nums.end());
//         set<pair<int,int>>ans;
//         int i=0,j=1;
//         while(j<nums.size()){
//             int diff=nums[j]-nums[i];
//             if(diff==k){
//                 ans.insert({nums[i],nums[j]});
//                 ++i,++j;
//             }
//             else if(diff>k){
//                 i++;
//             }
//             else{
//                 j++;
//             }
//             if(i==j) j++;
//         }
//         return ans.size();
//     }
// };
class Solution{
public:
    int bs(vector<int>&nums,int s,int x){
        int e =nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==x){
                return mid;
            }
            else if(x>nums[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return -1;
    }
    int findPairs(vector<int>& nums, int k){
        sort(nums.begin(),nums.end());
        set<pair<int,int>>ans;
        for(int i=0;i<nums.size();i++){
            if(bs(nums,i+1,nums[i]+k)!=-1){
                ans.insert({nums[i],nums[i]+k});
            }
        }
        return ans.size();
    }
};