public class Solution {
    public bool ContainsDuplicate(int[] nums) {
        HashSet<int> checknums = new HashSet<int>();
        foreach(int num in nums){
            if(checknums.Contains(num)){
                return true;
            }
            checknums.Add(num);
        }
        return false;
    }
}
