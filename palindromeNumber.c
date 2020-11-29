

bool isPalindrome(int x){
    if(x<0){
        return false;
    }
    if(x>=0 && x<=9){
        return true;
    }
    
    int temp = x;
    int dig,reverse=0,m=0;
    while(temp>0){
        temp/=10;
        m++;
    }
    temp=x;
    while(temp>0){
        dig = temp%10;
        reverse+=(dig*(pow(10,--m)));
        temp/=10;
    }
    printf("%d", reverse);
    if(reverse ==x){
        return true;
    }
    return false;
}
