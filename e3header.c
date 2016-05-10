#include "stdio.h"
#include "e3header_xxd_minsi.h"
// __e3
// __e3_len

int main () {
	int i;
	printf("E([");
	for (i=0; i<__e3_len; i++ ){
		//      E([     0, 0    ], "i8", 4, k.ga + 16484);
		printf("%u,", __e3[i]);
	}
	printf("], \"i8\", 4, k.ga + 16484);\n");
	return 0;
}

/*
	FILE *filec = fopen("e1to3", "wb");
	fwrite(e1, sizeof(char), sizeof(e1), filec);
	fwrite(e2, sizeof(char), sizeof(e2), filec);
	fwrite(e3, sizeof(char), sizeof(e3), filec);
	fclose(filec);
*/
