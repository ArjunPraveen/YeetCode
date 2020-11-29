/**
 * @param {character[]} chars
 * @return {number}
 */


var compress = function(chars) {
    let count =1
    let start=0
    if(chars.length ==1)
        return 1
    for(let i=0; i<chars.length; i++){
        //console.log(chars[i])
        if(i<chars.length && chars[i]==chars[i+1]){
            count++
        }else{
            if(count==1){
                start=i+1
                continue
            }
            dig = []
            counts = count.toString()
            for(let k=0; k<counts.length; k++){
                dig.push(counts[k])
            }
            chars.splice(start, count, chars[i], ...count.toString())
            i = start+counts.length
            count=1
            start=i+1
        }
        
    }

    return chars.length;
};
