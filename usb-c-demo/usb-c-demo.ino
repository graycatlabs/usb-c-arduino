#include <Wire.h>
#include "tcpm_driver.h"
#include "usb_pd.h"

const int usb_pd_int_pin = 12;
const int debug_led_pin  = 13;

// USB-C Specific - TCPM start 1
const struct tcpc_config_t tcpc_config[CONFIG_USB_PD_PORT_COUNT] = {
  {0, fusb302_I2C_SLAVE_ADDR, &fusb302_tcpm_drv},
};
// USB-C Specific - TCPM end 1

void setup() {
  //Serial.begin(115200);
  //Serial.println("Hello!");

  pinMode(usb_pd_int_pin, INPUT);
  pinMode(debug_led_pin, OUTPUT);
  digitalWrite(debug_led_pin, LOW);
  
  Wire.begin();
  Wire.setClock(400000);
  
  tcpm_init(0);
  delay(50);
  pd_init(0);
  delay(50);
}

void loop() {  
  if (LOW == digitalRead(usb_pd_int_pin)) {
      tcpc_alert(0);
  }
  
  pd_run_state_machine(0);
  delay(4);
}

void pd_process_source_cap_callback(int port, int cnt, uint32_t *src_caps)
{
  digitalWrite(debug_led_pin, HIGH);
  delay(14);
}

