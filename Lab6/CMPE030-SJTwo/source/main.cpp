#include <cstdarg>
#include <cstdint>
#include "L1_Peripheral/lpc40xx/gpio.hpp"
#include "L2_HAL/boards/sjtwo.hpp"
#include "L3_Application/graphical_terminal.hpp"
#include "L2_HAL/switches/button.hpp"
#include "utility/log.hpp"
#include "utility/time.hpp"
int main()
{
// OLED INITIALIZATION
  sjsu::Graphics & oled_graphics = sjtwo::Oled();
  sjsu::TerminalCache_t<
    sjsu::Ssd1306::kHeight / sjsu::GraphicalTerminal::kCharacterHeight,
    sjsu::Ssd1306::kWidth / sjsu::GraphicalTerminal::kCharacterWidth>
    cache;
  sjsu::GraphicalTerminal oled_terminal(&oled_graphics, &cache);

  oled_terminal.Initialize();
// OLED INITIALIZATION END

// BUTTON INITIALIZATION
  sjsu::lpc40xx::Gpio button_gpio0(1, 19);
  sjsu::lpc40xx::Gpio button_gpio1(1, 15);
  sjsu::lpc40xx::Gpio button_gpio2(0, 30);
  sjsu::lpc40xx::Gpio button_gpio3(0, 29);

  sjsu::Button button0(button_gpio0);
  sjsu::Button button1(button_gpio1);
  sjsu::Button button2(button_gpio2);
  sjsu::Button button3(button_gpio3);
  
  /*
  sjtwo::led0.SetAsOutput();
  sjtwo::led1.SetAsOutput();
  sjtwo::led2.SetAsOutput();
  sjtwo::led3.SetAsOutput();
  */

  button0.Initialize();
  button1.Initialize();
  button2.Initialize();
  button3.Initialize();
//BUTTON INITIALIZATION END
/* Insert your C code here */
  /*//Number 1
  oled_terminal.printf("Vincent Saw\n");
  oled_terminal.printf("Press a button:\n");
  while (1) {
    if (button0.Pressed() == 1)
      oled_terminal.printf("Button 0 pressed");
    if (button1.Pressed() == 1)
      oled_terminal.printf("Button 1 pressed");
    if (button2.Pressed() == 1)
      oled_terminal.printf("Button 2 pressed");    
    if (button3.Pressed() == 1)
      oled_terminal.printf("Button 3 pressed");
  }
  */
  //Number 3

  int b0 = 0;
  int b1 = 0;
  int b2 = 0;
  int total;

  while (1) {
    if (button1.Pressed() == 1) {//LSB, SWB1
      b0 = 1;
      sjtwo::led1.SetAsOutput();
    }
    if (button2.Pressed() == 1) {//SWB2
      b1 = 1;
      sjtwo::led2.SetAsOutput(); 
    }
    if (button3.Pressed() == 1) {//MSB, SWB3
      b2 = 1;
      sjtwo::led3.SetAsOutput();
    }
    if (button0.Pressed() == 1) //Exit, SWB0
      break;
  }
  total = (b2*4) + (b1*2) + b0;
  oled_terminal.printf("Decimal: %d", total);
  
 
  return (0);
}