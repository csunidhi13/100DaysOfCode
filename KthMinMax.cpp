https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
int kthSmallest(int arr[], int l, int r, int k) {
    //code here
    
    sort(arr,arr+r+1);
    return arr[k-1];
}
https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[n-k];
        
    }
};

WATCH : https://www.youtube.com/watch?v=hGK_5n81drs