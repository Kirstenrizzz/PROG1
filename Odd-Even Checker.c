#include <stdio.h>

int main() {
     int num1;
        printf("Enter your number: ");
        scanf("%d", &num1);
    
    if(num1%2==0){
        printf(" %d is EVEN\n");
    }else{
        printf("%d is ODD",num1);
    }
    return 0;
}
