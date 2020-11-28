function countAndSay(n: number): string {
    
    let countsay: string[]= [];
    countsay[1]="1"
    if(n==1)
        return countsay[1]
    var i:number = 2
    for(i; i<=30; i++){
        let temp : string = countsay[i-1];
        var count,j:number 
        countsay[i]=""
        count=1
        for(j = 0; j<temp.length; j++){
            if(j!=temp.length && temp[j]==temp[j+1]){
                count++;
            }else{
                countsay[i]+= (count.toString() + temp[j])
                count=1
            }
        }
        if(i==n)
            return countsay[n];
    }
    return "hey";
};
