/*
 * tcpm_driver.c
 *
 * Created: 11/11/2017 18:42:26
 *  Author: jason
 */ 

#include "tcpm_driver.h"

extern const struct tcpc_config_t tcpc_config[CONFIG_USB_PD_PORT_COUNT];

/* I2C wrapper functions - get I2C port / slave addr from config struct. */
int tcpc_write(int port, int reg, int val)
{
  return 0;
}

int tcpc_write16(int port, int reg, int val)
{
  return 0;
}

int tcpc_read(int port, int reg, int *val)
{
  return 0;

}

int tcpc_read16(int port, int reg, int *val)
{
  return 0;
}

int tcpc_xfer(int port,
	const uint8_t *out, int out_size,
	uint8_t *in, int in_size,
	int flags)
{
	return 0;
}
