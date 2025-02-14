#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#define  sys_mem 549

int main(int argc, char *argv[]){
        unsigned char init[7] = "Abili\0";
        unsigned char fin[7] = "David\0";
        long val = syscall(sys_mem, init, fin, 7);
	printf("Init:%s, Fin:%s\n", init, fin);
	if(val == 0){
        	 printf("Success\n");
        } else if(val != EFAULT){
        	 printf("Unexpected, %ld\n", val);
        } else {
                 printf("EFAULT!\n");
        }
        return 0;
}

