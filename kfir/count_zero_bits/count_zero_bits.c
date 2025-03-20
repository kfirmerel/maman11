#include <stdio.h> 
#include <string.h>

int count_zero_bits(unsigned int n) {  /* function to count the number of zero bits in a number */
    int count = 0;/*counter for the zero bits*/
    int temp; /*temp variable to store the number after shifting*/
    while (n){ 
        temp = n>>1; 
        temp = temp << 1; /*shifting the number to the right and then to the left to check if the bit is zero*/
        if (temp == n){
            count++;
        }
        n = n>>1; 
    }
    return count;   
}
int main(){
    unsigned int n; /*the number to check*/
    printf("Enter a number: ");
    scanf("%u", &n);
    printf("The number of zero bits in %u is %d\n", n, count_zero_bits(n));
    return 0;
}
    

    