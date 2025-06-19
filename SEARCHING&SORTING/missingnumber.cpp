class Solution {
public:
int findmissingnumber(vector<int>nums){
    sort(nums.begin(),nums.end());
    int ansindex=-1;
    int n=nums.size();
    int s=0;
    int e=nums.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        int number=nums[mid];
        int index=mid;
        int diff=number-index;
        if(diff==0){
            s=mid+1;
        }
        else if(diff==1){
            ansindex=index;
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    if(ansindex==-1){
        return n;
    }
    return ansindex;
}
    int missingNumber(vector<int>& nums) {
        return findmissingnumber(nums);
    }
};