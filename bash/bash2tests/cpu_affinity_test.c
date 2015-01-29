/*
 * Test file for Bash2 set CPU affinity
 * NOTE: a big dead loop with sleep:)
 * Jan 29, 2015
 * daveti
 */
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int i = 0;

	while (1) {
		printf("Bash2-set-CPU-affinity test [%d], pid [%d]\n",
			i, getpid());
		i++;
		sleep(1);
	}

	return 0;
}
