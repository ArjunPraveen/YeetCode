function plusOne(digits: number[]): number[] {
    
    let num:bigint =BigInt(digits.join('')) + BigInt(1)
    console.log(num)
    let n:string = num.toString()
    console.log(n)
    let result:number[] = []
    for(let i:number=0; i<n.length; i++){
        result.push(parseInt(n[i]))
    }
    if(digits.length>n.length){
        for(let i:number=0; i<digits.length-n.length; i++){
            result.unshift(0)
        }
    }
    return result

};
