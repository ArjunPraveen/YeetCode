function decompressRLElist(nums: number[]): number[] {
    let ans:number[]= []
    for(let i:number = 0; i<nums.length; i++){
        let index:number = i+1;
        for(let j:number=0; j<nums[i]; j++){
            ans.push(nums[index])
        }
        i++
    }
    return ans
};
