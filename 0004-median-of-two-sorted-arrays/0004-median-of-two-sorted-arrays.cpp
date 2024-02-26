class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median = 0;
        int arr1Len = nums1.size();
        int arr2Len = nums2.size();
        vector<int> mergedArray;
        int p1 = 0;
        int p2 = 0;
        if(arr1Len > arr2Len){
            while(p2 < arr2Len){
                if(p1 < arr1Len && nums1[p1] < nums2[p2] ){
                    mergedArray.push_back(nums1[p1]);
                    p1++;
                }else{
                    mergedArray.push_back(nums2[p2]);
                    p2++;
                }
            }
            while(p1 < arr1Len){
                mergedArray.push_back(nums1[p1]);
                p1++;
            }
                
        }else{
            while(p1 < arr1Len){
                if(p2 < arr2Len && nums2[p2] < nums1[p1]){
                    mergedArray.push_back(nums2[p2]);
                    p2++;
                }else{
                    mergedArray.push_back(nums1[p1]);
                    p1++;
                }
            }
            while(p2 < arr2Len){
                mergedArray.push_back(nums2[p2]);
                p2++;
            }
        }
        int mergedArrLen = mergedArray.size();
        if(mergedArrLen % 2 == 1){
            int medianIndex = (mergedArrLen / 2);
            median = mergedArray[medianIndex];
        }else{
            int medianIndex1 = (mergedArrLen/2)-1;
            int medianIndex2 = (mergedArrLen/2);
            median = (mergedArray[medianIndex1] + mergedArray[medianIndex2])/2.0;
        }
        
        return median;
    }
};