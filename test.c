//https://www.youtube.com/watch?v=w3iXBUbq4NY&t=418s
#include <stdio.h>
#include <stdlib.h>

//#define MIN(A, B) ((A) < (B) ? (A) : (B))
#define MIN(A, B) ({ \
		    typeof(A) _a = (A); \
		    typeof(B) _b = (B); \
		    _a < _b ? _a : _b; \
		    })

int getnextnum()
{
	int nextnum = rand() % 100;
	printf("next --> %d\n", nextnum);
	return nextnum;
}

int main()
{
	int n1, n2, n3;
	n3 = MIN(n1 = getnextnum(), n2 = getnextnum());
	printf("%d\n", n3);
	printf("%d\n", MIN(45, 672));
	printf("%f\n", MIN(53.4, 17.2));
	//printf("%f\n", MIN(53.4, "hey"));
}
