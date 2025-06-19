// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int n=nums.size();
//         int s=0;
//         int e=n-1;
//         int mid=(s+e)/2;

//         while(s<=e){
//             if(nums[mid]==target){
//                 return mid;
//             }
//             else if(target>nums[mid]){
//                 s=mid+1;
//             }
//             else if(target<nums[mid]){
//                 e=mid-1;
//             }
//             mid=(s+e)/2;
//         }
//         return -1;
//     }
// };
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    int n=8;
    int target=55;
    bool ans=binary_search(arr,arr+n,target);
    cout<<ans<<endl;
    return 0;
}