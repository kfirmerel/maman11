#include <stdio.h>
#include <string.h>
#define isok(c) (((c) >= 'a' && (c) <= 'z') || ((c) >= 'A' && (c) <= 'Z') || ((c) >= '0' && (c) <= '9'))
int palindrome(char s[ ]){
    int i = 0;  
    int j = strlen(s) - 1;
    while (i<j){
        if (!isok(s[i])){
            i++;
            continue;
        }
        if (!isok(s[j])){
            j--;
            continue;
        }
        if (s[i] != s[j]){
            return 0;
        }
        i++;
        j--;
}
return 1;
}
int main(){
    char s[81];
    printf("Enter a string: ");
    scanf("%s", s);
    printf("the string you enterd is : %s\n", s);
    if (palindrome(s)){
        printf("The string is a palindrome\n");
    }
    else{
        printf("The string is not a palindrome\n");
    }    
    return 0;
}
