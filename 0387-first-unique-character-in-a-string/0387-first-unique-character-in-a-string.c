int firstUniqChar(char* s) {
    int i, j, uni;
    for(i=0;s[i]!='\0';i++)
    { uni = 1;
        for(j=0;s[j]!='\0';j++)
        {
            if(i!=j && s[i]==s[j]){
            uni = 0;
            break;}
        }
        if(uni==1)
        return i;
    }
    return -1;
}