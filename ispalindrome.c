#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    if (argc != 2) {
        fprintf(stderr, "usage: ispalindrome string\n");
        return(1);
    }

	char *p;
	char *q;

	for(q = &argv[1][0]; *q ; q++){ //Iterates through string and points Q to '\0'
	}
	
	q--;   //Points Q to the last character of the string
	p = &argv[1][0];   //Points p to first char of string
	
	while( p < q){   //Compare p and q to check if palindrome
		if(!isalnum(*p)){
			p++;
		}
		else if (!isalnum(*q)){
			q--;
		}
		else if( tolower(*p) == tolower(*q)){
			p++;
			q--;
		}
		else{
			if ( tolower(*p) != tolower(*q)) {
				return(1);
			}
		}
	}
	return(0);
}
