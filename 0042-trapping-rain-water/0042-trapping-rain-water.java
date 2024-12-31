class Solution {
    public int trap(int[] height) {
        int len = height.length;
        int trappedWater = 0;

        //auxillary arrays for left and right max heights
        int[] leftMax = new int[len];
        leftMax[0] = height[0];
        for(int i = 1; i < len; i++){
            leftMax[i] = Math.max(leftMax[i-1], height[i]);
        }

        int[] rightMax= new int[len];
        rightMax[len-1] = height[len-1];
        for(int i = len-2; i >= 0; i--){
            rightMax[i] = Math.max(height[i], rightMax[i+1]);
        }

        //finding waterlevel and trappedWater
        for(int i = 0; i < len; i++){
            int waterlevel = Math.min(leftMax[i], rightMax[i]);
            int water = waterlevel - height[i];
            if(water > 0){
                trappedWater += water;
            }
        }

        return trappedWater;
    }
}