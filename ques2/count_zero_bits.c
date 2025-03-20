#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*the program check if text is a palindrome
*/

int bits_zero_c(unsigned int n){
    int count = 0;
    if (n == 0)
    {
        return 1;
    }
    
    while(n){
        if((n & 1) == 0){
            count++;
        }
        n = n >> 1;
    }
    return count;
	
}

int main() {
unsigned int n;
printf("Enter a number: ");
scanf("%u", &n);
printf("the number is %u\n", n);
printf("Number of zero bits in %u is %d\n", n, bits_zero_c(n)); 
return 0;
}