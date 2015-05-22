#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(int x, int y){
	srand(time(NULL));
	return x + rand() % (y-x+1);
}

main(){
	printf("RAND_MAX = %d\n", RAND_MAX);
	printf("%d\n", random(3, 7));
	printf("%d\n", random(6, 9));
}
