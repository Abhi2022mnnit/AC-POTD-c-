//https:leetcode.com/problems/find-smallest-letter-greater-than-target/?fbclid=IwAR3jxCwoHMR2BpzNHquNtZqgKI_uAU4xpqLhXx93YgepFTPW5iEkypVJ8VA

char nextGreatestLetter(char* letters, int lettersSize, char target){
    char *ch = letters;
    for (int i=0; i<lettersSize; i++){
        if(letters[i] > target) {*ch = letters[i]; break;}
    }

    return *ch;
}