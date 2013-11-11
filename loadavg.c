#include <stdlib.h>
#include <stdio.h>

void show_loadavg(){
	double avenrun[3];
	int i;

	// from /usr/src/usr.bin/w/w.c
    if (getloadavg(avenrun, sizeof(avenrun) / sizeof(avenrun[0])) == -1)
        (void)printf("no load average information available\n");
    else {
        (void)printf("load averages: %.2f, %.2f, %.2f\n",
			avenrun[0],
			avenrun[1],
			avenrun[2]
		);
    }
}
