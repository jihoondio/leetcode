int subtractProductAndSum(int n){
    int ans = 0;
    int sum = 0;
    int mul = 1;
    
    int digit = n / 10;
    while (n > 0) 
    {
        int digit = n % 10;
        sum += digit;
        mul *= digit;
        n /= 10;
    }
    
    return mul - sum;
}