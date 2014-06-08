#ifndef TLC_Teensy_xxU4_h
#define TLC_Teensy_xxU4_h

// bitbang I/O is pretty fast on Teensy 3.1
// and avoids SPI sharing problems
#ifdef DATA_TRANSFER_MODE
#undef DATA_TRANSFER_MODE
#endif
#define DATA_TRANSFER_MODE TLC_BITBANG

// Teensy pin 6 -> SIN (TLC pin 26)
#define DEFAULT_BB_SIN_PIN	6
#define DEFAULT_BB_SIN_PORT	6
#define DEFAULT_BB_SIN_DDR	6

// Teensy pin 7 -> SCLK (TLC pin 25)
#define DEFAULT_BB_SCLK_PIN	7
#define DEFAULT_BB_SCLK_PORT	7
#define DEFAULT_BB_SCLK_DDR	7

// FTM1_CH0 (Teensy pin 3) -> XLAT (TLC pin 24)
#define XLAT_PIN		3
#define XLAT_PORT		3
#define XLAT_DDR		3

// FTM1_CH1 (Teensy pin 4) -> BLANK (TLC pin 23)
#define BLANK_PIN		4
#define BLANK_PORT		4
#define BLANK_DDR		4

// CMTOUT (Teensy pin 5) -> GSCLK (TLC pin 18)
#define GSCLK_PIN		5
#define GSCLK_PORT		5
#define GSCLK_DDR		5

// Timer settings...
#if F_BUS == 60000000
  #define TLC_TIMER_TEENSY3_NORMAL_CGH1		4
  #define TLC_TIMER_TEENSY3_NORMAL_CGL1		11
#elif F_BUS == 56000000
  #define TLC_TIMER_TEENSY3_NORMAL_CGH1		3
  #define TLC_TIMER_TEENSY3_NORMAL_CGL1		11
#elif F_BUS == 48000000
  #define TLC_TIMER_TEENSY3_NORMAL_CGH1		3
  #define TLC_TIMER_TEENSY3_NORMAL_CGL1		9
#elif F_BUS == 36000000
  #define TLC_TIMER_TEENSY3_NORMAL_CGH1		2
  #define TLC_TIMER_TEENSY3_NORMAL_CGL1		7
#elif F_BUS == 24000000
  #define TLC_TIMER_TEENSY3_NORMAL_CGH1		2
  #define TLC_TIMER_TEENSY3_NORMAL_CGL1		4
#elif F_BUS == 16000000
  #define TLC_TIMER_TEENSY3_NORMAL_CGH1		1
  #define TLC_TIMER_TEENSY3_NORMAL_CGL1		3
#elif F_BUS <= 8000000
  #define TLC_TIMER_TEENSY3_NORMAL_CGH1		1
  #define TLC_TIMER_TEENSY3_NORMAL_CGL1		1
#else
#error "F_BUS must be 60, 56, 48, 36, 24, 16, 8, 4, or 2 MHz"
#endif

#endif
