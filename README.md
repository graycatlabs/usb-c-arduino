# Introduction

This example is an extension of the firmware used on the [**USB-C Explorer**](https://github.com/ReclaimerLabs/USB-C-Explorer), which was a port of the [**Google Chrome EC library**](https://www.chromium.org/chromium-os/ec-development). This code is intended to show how to extend the library to new platforms, and provide a starting point for getting started with USB-C and Arduino. 

# Notes and Limitations

Running the USB-C Power Delivery stack can require some amount of RAM and processing power. I've tested this with the Arduino M0. I'm not sure something like the Arduino Uno is capable of running this code without some modiciations. Pull requests are always welcome. 

The other major limitation is the power supplies on the Arduino. They don't seem to work well much above 12 V. When I tried 15 V, the Arduino M0 tended to draw too much current and get kicked off the power supply by the charger. If you want to go higher than 12 V, you will either need a power adapter or use something like the [**USB-C Explorer**](https://www.tindie.com/products/ReclaimerLabs/usb-c-explorer/). 

# Example Usage

This code was tested with the [**FUSB302 breakout board**](https://www.tindie.com/products/ReclaimerLabs/usb-type-c-power-delivery-phy-breakout-board/). Here are the connections you will need. 

* Breakout Pin -> Arduino Pin
* GND -> GND
* Vbus -> Vin
* Vpu -> IOREF
* VDD -> 3.3V
* SDA -> SDA
* SCL -> SCL
* INT -> D12
* GND -> GND (for good measure)

# Questions, Comments, and Contributions

Pull requests are welcome. If you have questions or comments, you can email me directly at jason@reclaimerlabs.com. 
