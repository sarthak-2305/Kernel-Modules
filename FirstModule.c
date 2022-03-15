//including the header files (they're different from normal C stuff)
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

//specifying details about the module
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sarthak");
MODULE_DESCRIPTION("First kernel module idk what I'm doing");
MODULE_VERSION("1");

//when module is pushed into the kernel
static int __init hello(void)
{
	printk(KERN_INFO "Hello world!\n");
	return 0;
}

//message for when the module is taken out from the kernel
static void __exit getMeOuttaHere(void)
{
	printk(KERN_INFO "Bye bye!\n");
}

//these 2 functions are required
module_init(hello);
module_exit(getMeOuttaHere);
