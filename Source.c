#include <stdio.h>
#include <stdlib.h>
#define AMAX 100

int main() {
	int n, a[AMAX], b[AMAX];
	while (printf("\nUnesite br elemenata niza:") && scanf("%d", &n) && n > 0)
	{
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		for (int j = 0; j < n; j++) scanf("%d", &b[j]);
		int ct = 0, i = 0, br = 0, mod = 1, j = 0;
		while (ct ==0)
		{
			if (a[0] == b[i])
			{
				ct = 5000;
				for (j=0;j<n;j++)
				{
					if (i%n == 0) i = 0;
					if (a[j] != b[i])
					{
						mod = 0;
						break;
					}
					i++;
				}
			}
			else i=++br;
		}
		if (mod == 1) printf("Treba se pomeriti %d mesta", n-br);
		else printf("ne moze se napraviti");
	}
} 
