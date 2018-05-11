
#include "tcpm_driver.h"
#include "usb_pd.h"

// USB-C Specific - TCPM start 1
const struct tcpc_config_t tcpc_config[CONFIG_USB_PD_PORT_COUNT] = {
  {0, fusb302_I2C_SLAVE_ADDR, &fusb302_tcpm_drv},
};
// USB-C Specific - TCPM end 1
void setup() {
  // put your setup code here, to run once:
  tcpm_init(0);
  delay(50);
  pd_init(0);
}

void loop() {
  // put your main code here, to run repeatedly:

}

