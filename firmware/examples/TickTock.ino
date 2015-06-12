#include "LCD_I2C/LCD_I2C.h"

//-----------------------------------------------//
// I2C / SPI LCD BACKPACK LIBRARY FOR SPARK CORE //
//===============================================//
// Copy this into a new application at:          //
// https://www.spark.io/build and go nuts!       //
// !! Pinouts on line 427 below !!               //
//-----------------------------------------------//
// Technobly / BDub - Jan 16th 2014              //
//===============================================//

// http://www.adafruit.com/products/292
// https://github.com/adafruit/LiquidCrystal

 
/* ==================== APPLICATION.CPP ===================== */

// Adafruit's I2C / SPI LCD Backpack
// http://www.adafruit.com/products/292
//
// WIRE IT UP FOR I2C MODE
//
// I2C BACKPACK         SPARK CORE
//--------------------------------------------------------------------
// 5V                 - Vin (5V only, does not work on 3.3)
// GND                - GND
// Serial Clock (SCL) - D1 (Includes 4.7k pull up resistor to 5V already)
// Serial Data  (SDA) - D0 (Includes 4.7k pull up resistor to 5V already)
//--------------------------------------------------------------------

// Connect via i2c, default address #0 (A0-A2 on PCB pads not solder-bridged)
LiquidCrystal lcd(0);

void setup() {
  // set up the LCD's number of rows and columns: 
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Hello, Sparky!");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis()/1000);

  lcd.setBacklight(HIGH);
  delay(500);
  lcd.setBacklight(LOW);
  delay(500);
}

