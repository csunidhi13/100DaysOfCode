void removeConsecutiveDuplicates(char *s) {

if(s[0]=='\0'){
    return;
}
    else if(s[0]!=s[1]){
        removeConsecutiveDuplicates(s+1);
        
    }
    else{
        int i=0;
        for(;s[i]!='\0';i++){
           
            s[i]=s[i+1];
        }
           
        removeConsecutiveDuplicates(s);
    }
    

}