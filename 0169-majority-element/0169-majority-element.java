import java.util.*;

class Solution {
    public int majorityElement(int[] nums) {
        int maj = nums.length / 2;
        Map<Integer, Integer> mpp = new HashMap<>();

        for (int num : nums) {
            mpp.put(num, mpp.getOrDefault(num, 0) + 1);
            if (mpp.get(num) > maj) {
                return num;
            }
        }

        // This line is not strictly needed since the problem guarantees a majority element
        return -1;
    }
}
