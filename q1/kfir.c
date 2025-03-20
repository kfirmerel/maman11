#include <stdio.h>
#include <string.h>
#define isok(c) (((c) >= 'a' && (c) <= 'z') || ((c) >= 'A' && (c) <= 'Z') || ((c) >= '0' && (c) <= '9') || ((c) == ' ') || ((c) == '\t')) /* macro to make sure the char is a letter or a number */
int palindrome(char s[]){ /* function to check if the string is a palindrome */
    int left = 0;  
    int right = strlen(s) - 1;
    while (left<right){
        if (!isok(s[left]) || !isok(s[right])){ /*check if the char is a letter or a number*/ 
            printf("The string is not include only letters and numbers\n");
            return 0;
        } 
        if (s[left] == ' ' || s[left] == '\t'){ /*skip if tab/space */
            left++;
            continue;
        }
        if (s[right] == ' ' || s[right] == '\t'){ /*skip if tab/space*/
            right--;
            continue;
        }
        if (s[left]-s[right]){ /*comparing char*/
            return 0;
        }
        left++;
        right--;
}
return 1;
}
int main(){
    char s[81];
    int len;
    printf("Enter a string:\n");
    fgets(s, sizeof(s), stdin);
    printf("the string you enterd is : %s\n", s);
    len = strlen(s);
    if (s[len - 1] == '\n'){
        s[len - 1] = '\0';
    }
    if (palindrome(s)){
        printf("The string is a palindrome\n");
    }
    else{
        printf("The string is not a palindrome\n");
    }    
    return 0;
}
