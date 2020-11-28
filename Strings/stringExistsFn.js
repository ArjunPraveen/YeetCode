/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function(haystack, needle) {
    if(needle=="")
        return 0;
    if (!haystack || !needle) {
    return -1;
    }
    h= haystack.length
    n= needle.length
    
    let pointer = 0
    var j;
    for(let i=0; i<=h-n; i++){
        console.log(haystack[i]);
        for(j=0; j<n && haystack[i+j]==needle[j]; j++){
            console.log("")
        }
        if(j==n){
            return i;
        }
    }
    return -1;
};
