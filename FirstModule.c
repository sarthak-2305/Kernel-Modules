#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sarthak");
MODULE_DESCRIPTION("First kernel module idk what I'm doing");
MODULE_VERSION("1");

static int __init hello(void)
{
	printk(KERN_INFO "Hello world!\n");
	return 0;
}

static void __exit getMeOuttaHere(void)
{
	printk(KERN_INFO "Bye bye!\n");
}

module_init(hello);
module_exit(getMeOuttaHere);
