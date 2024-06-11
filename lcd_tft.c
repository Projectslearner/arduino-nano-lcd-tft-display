/*
    Project name : LCD TFT Display
    Modified Date: 11-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-lcd-tft-display
*/

#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_TFTLCD.h> // Hardware-specific library

#define LCD_CS A3            // Chip Select (CS) pin
#define LCD_CD A2            // Command/Data (DC) pin
#define LCD_WR A1            // Write (WR) pin
#define LCD_RD A0            // Read (RD) pin
#define LCD_RESET A4         // Reset (RST) pin

Adafruit_TFTLCD tft(LCD_CS, LCD_CD, LCD_WR, LCD_RD, LCD_RESET);

void setup() {
  Serial.begin(9600);

  // Initialize the display
  tft.begin();

  // Set the rotation of the display
  tft.setRotation(3);

  // Fill the screen with a color
  tft.fillScreen(ILI9341_RED);
}

void loop() {
  // Draw some text
  tft.setCursor(50, 50);
  tft.setTextColor(ILI9341_WHITE);
  tft.setTextSize(2);
  tft.println("Hello, World!");

  // Draw a rectangle
  tft.drawRect(10, 10, 100, 50, ILI9341_BLUE);

  delay(1000);
}
