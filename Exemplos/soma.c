#include <stdio.h>

int main(){
    
    int a;
    int b;
    int x;
    
    int soma;
    
    //scanf("%d %d %d", &a, &b, &x);
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &x);        
    
    int i;
    for(i = a; i <= b; i++){
        if ((i % 2 == 0) && (i % 3 == 0) && (i % x == 0))
            soma += i;
    }
    
    printf("%d", soma);
  
    return 0;
    
}