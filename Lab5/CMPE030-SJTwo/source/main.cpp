#include <cstdarg>
#include <cstdint>

#include "L2_HAL/boards/sjtwo.hpp"
#include "L3_Application/graphical_terminal.hpp"
#include "utility/log.hpp"
#include "utility/time.hpp"

int main()
{
LOG_INFO("Starting OledPrint Application...");
  sjsu::Graphics & oled_graphics = sjtwo::Oled();
  sjsu::TerminalCache_t<
      sjsu::Ssd1306::kHeight / sjsu::GraphicalTerminal::kCharacterHeight,
      sjsu::Ssd1306::kWidth / sjsu::GraphicalTerminal::kCharacterWidth>
      cache;
  sjsu::GraphicalTerminal oled_terminal(&oled_graphics, &cache);

  oled_terminal.Initialize();

  LOG_INFO("Demonstrating printf capabilities...");
  oled_terminal.printf("Vincent Saw\n");
  //oled_terminal.printf("Float: %.1f\nInteger: %d", 234.5, 15);

LOG_INFO("Starting Hello World Application");  
while (true)
  {
    for (uint8_t i = 0; i < 16; i++)
    {
      LOG_INFO("CMPE030-4 0x%X", i);
      sjsu::Delay(500ms);
    }
  }
  return -1;
}
