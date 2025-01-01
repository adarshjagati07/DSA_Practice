class Solution {
    public int[] rearrangeArray(int[] nums) {
        int len = nums.length/2;
        int[] positive = new int[len];
        int[] negative = new int[len];
        int p=0; 
        int n = 0;
        for(int i = 0; i < nums.length; i++){
            if(nums[i] < 0){
                negative[n] = nums[i];
                n++;
            }else{
                positive[p] = nums[i];
                p++;
            }
        }
        p = 0; n = 0;
        int i = 0;
        while(p < positive.length && n < negative.length){
            nums[i++] = positive[p++];
            nums[i++] = negative[n++];
        }
        return nums;
    }
}