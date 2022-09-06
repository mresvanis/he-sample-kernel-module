/*
 *  he-sample-kernel-module.c - The simplest kernel module.
 */
#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */

MODULE_LICENSE("Apache 2.0");

int init_module(void)
{
	printk(KERN_INFO "Hello world from he_sample_kernel_module.\n");

	/*
	 * A non 0 return means init_module failed; module can't be loaded.
	 */
	return 0;
}

void cleanup_module(void)
{
	printk(KERN_INFO "Goodbye world from he_sample_kernel_module.\n");
}
