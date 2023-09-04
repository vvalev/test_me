#include <stdio.h>
int main() {   
    int number;
   
    //---So, this is a change made under the 'next_branch' branch
	
	printf("==== This is a new line: \n");
	
    printf("Enter an integer: \n");  
    
    // reads and stores input
    scanf("%d", &number);

    // displays output
    printf("You entered: %d\n", number);
    
    return 0;
}
