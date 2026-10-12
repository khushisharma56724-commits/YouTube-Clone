bool isPalindrome(int x) {
    long i, rev=0, ori=x;
    while(x>0)
    {
        i =x % 10;
        rev = rev*10+i;
        x = x/10;
    }
    if(rev==ori)
    return true;
    else
    return false;
}