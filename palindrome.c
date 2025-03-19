#include <stdio.h>

#define LOWERCASE_A 'a'
#define LOWERCASE_Z 'z'
#define UPPERCASE_A 'A'
#define UPPERCASE_Z 'Z'
#define DIGIT_0 '0'
#define DIGIT_9 '9'
#define QUOTE '"'
#define PERIOD '.'
#define ON 1
#define OFF 0
#define ASCIIGAP 32
/*the program processes text with the following transformations:
1. remove digits
2. Capitalizes the first letter after a period
3. Capitalizes within double quotes
4.lowercase outside double quotes
5. Capitalizes in case of one quotes the 
*/
int main() {
	int fcap = ON;/*flag to Capitalizes*/
	int fquot = OFF;/*flag to Quotation marks*/
	char c;

	printf("Please enter text to be formatted:");	
	printf("\n");	
	while((c=getchar()) != EOF)
	{
		if(c>=DIGIT_0 && c<=DIGIT_9)/* remove digits*/
		{
			continue;
		}else if(fquot && c>=LOWERCASE_A && c<=LOWERCASE_Z)/*Capitalizes between Quotation marks*/
		{
			putchar(c-ASCIIGAP);
			continue;
		}else if(fquot==OFF && c==QUOTE)/*start Quotation marks flag*/
		{
			putchar(c);
			fquot++;
			continue;
		}else if(fquot==ON && c==QUOTE)/*end Quotation marks flag*/
		{
			putchar(c);
			fquot--;
			continue;
		}else if(fquot==OFF && fcap && ((c>=LOWERCASE_A && c<=LOWERCASE_Z)||(c>=UPPERCASE_A && c<=UPPERCASE_Z)))/*new sentence*/
		{
			if(c>=UPPERCASE_A && c<=UPPERCASE_Z)/*if already capitalized */
			{
				putchar(c);		
			}else/*else switch to capitalized*/
			{
				putchar(c-ASCIIGAP);	
			}
			fcap--;/*turn off capitalized flag*/
			continue;
		}else if(fquot==OFF && c=='.' && fcap==OFF)/*turn on capitalized letter flag*/
		{
			fcap++;
		}else if(fquot==OFF && c>=UPPERCASE_A && c<=UPPERCASE_Z)/*Lowercase letter*/
		{
		putchar(c+ASCIIGAP);
		continue;
		}
		putchar(c);/*print other characters*/
	}
	printf("\n");
	return 0;
}