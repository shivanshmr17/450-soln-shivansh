string reverseWord(string str){
    int k = str.size();
    for(int i = 0 ;i <k/2 ;i++){
    swap(str[i],str[k-i-1]) ;
    }
    return str ;
}