#include <stdio.h> 
#include <string.h>

int count_zero_bits(unsigned int n) {  /* function to count the number of zero bits in a number */
    int count = 0;/*counter for the zero bits*/
    int temp; /*temp variable to store the number after shifting*/
    if (n == 0){ return 1;} /* if the number is zero return 1 */
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
    unsigned int u; /*the number to check*/
    printf("please Enter an unsigned Integer in decimal base:\n");
    scanf("%u", &u);
    printf("The number of zero bits in %u is %d\n", u, count_zero_bits(u));
    return 0;
}
    

    