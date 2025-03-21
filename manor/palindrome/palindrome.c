#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*the program check if text is a palindrome
*/

int palindrome(char s[ ]){
	int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        /* skip if tas/space*/
        while (left < right && (s[left]=='\t' || s[left]==' '))
			left++;
        while (left < right && (s[right]=='\t' || s[right]==' '))
			right--;
        /*comparing char*/
        if (s[left]-s[right]) {
            return 0; /*not palindrome*/ 
        }
        left++;
        right--;
    }

    return 1; /*palindrome*/ 
}

int main() {
	char input[81]; /*place to 80 char. for finish - '\0'*/

    printf("Enter a string (max 80 chars): ");
    fgets(input, sizeof(input), stdin);

    printf("You entered: %s\n", input);
	int len = strlen(input);
    if (len > 0 && input[len - 1] == '\n'){
        input[len - 1] = '\0';
    }
   if (palindrome(input))
		printf("the text is a palindrome\n");
	else
		printf("the text is NOT a palindrome\n");
    return 0;

}
