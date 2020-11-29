class Solution {
    public int maximumWealth(int[][] accounts) {
        int max = 0,wealth;
        for(int i=0 ; i<accounts.length; i++){
            wealth=0;
            for(int j=0; j<accounts[i].length; j++){
                wealth += accounts[i][j];
            }
            max = max > wealth ? max:wealth;
        }
        return max;
    }
}
