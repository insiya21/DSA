class Solution {
public:
    int peakIndexInMountainArray1(vector<int>& arr){
        int max=INT_MIN;
        int maxindex=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                max=arr[i];
                maxindex=i;
            }
        }
        return maxindex;
    }
    int peakIndexInMountainArray2(vector<int>&arr){
        int s=0;
        int n=arr.size();
        int e=n-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return mid;
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        // return peakIndexInMountainArray1(arr);
        return peakIndexInMountainArray2(arr);
    }
};