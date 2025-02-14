#include <linux/kernel.h>
#include <linux/uaccess.h>
#include <linux/syscalls.h>
#include <linux/errno.h>

SYSCALL_DEFINE3(memory_copy, unsigned char __user *, to,
	unsigned char __user *, from, int, size){
	unsigned char temp;
	if(access_ok(to, (long)size) == 0){
		return -EFAULT;
	}
	
	if(access_ok(from, (long)size) == 0){
		return -EFAULT;
	}
	int i;
	for(i = 0; i < size; i++){
		get_user(temp ,&from[i]);
		put_user(temp, &to[i]);
	}

	return 0;
}

