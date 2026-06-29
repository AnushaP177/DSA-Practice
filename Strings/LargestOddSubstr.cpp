void findLargestOddSubstring(string num) {
    int j=-1;
    for(int i=num.size()-1; i>=0; i--){
        if ((num[i]-'0') & 1){
            j=i;
            break;
        }
    }
    if (j==-1)  cout<<j;
    else    cout<<num.substr(0,j+1);
}
