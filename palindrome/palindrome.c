#include <stdio.h>
#include <string.h>
int palindrome(char s[]){ /* function to check if the string is a palindrome */
    int left = 0;  
    int right = strlen(s) - 1;
    while (left<right){
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
    char input[81]; /*max 80 char + /n */
    int length; /*length of the string*/
    printf("Enter a string:\n");
    fgets(input, sizeof(input), stdin);
    printf("the string you enterd is : %s\n", input);
    length = strlen(input);
    if (input[length - 1] == '\n'){
        input[length - 1] = '\0'; /*removing the /n from the string*/
    }
    if (palindrome(input)){
        printf("The string is a palindrome\n");
    }
    else{
        printf("The string is not a palindrome\n");
    }    
    return 0;
}
