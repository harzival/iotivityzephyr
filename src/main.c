#include <zephyr.h>
#include <sys/printk.h>

void main(void)
{
        printk("Hello Dude! %s\n", CONFIG_BOARD);
}