#include "uart.h"

void kernel_main(void)
{
	uart_init();
	uart_send_string("Welcome BenOS!\r\n");
	uart_send_string("noen ld1/ld2/ld3/ld4 test!\r\n");
}
