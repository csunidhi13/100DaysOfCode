https://leetcode.com/problems/sort-colors/submissions/
class Solution {
public:
    void sortColors(vector<int>& a) {
        int low=0;
        int med=0;
        int high=a.size()-1;
        while(med<=high){
            if(a[med]==0){
                swap(a[low++],a[med++]);
            }
            else if(a[med]==1){
                med++;
            }
            else{
                swap(a[med],a[high--]);
            }
        }
    }
};