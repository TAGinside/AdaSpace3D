#ifndef USER_CONFIG_H
#define USER_CONFIG_H

// ===================================================================================
// ADA SPACE 3D - USER CONFIGURATION
// ===================================================================================

// --- LED CONFIGURATION ---
// The firmware drives BOTH outputs simultaneously. Connect whichever you like.
// - Addressable Strip: GPIO 4
// - Simple LED: GPIO 3

#define LED_MODE 2 // 0 = Static (Solid Color)
// 1 = Breathing (Gently Fades)
// 2 = Debug / Reactive (Status Colors + White Flash on Move)

// Settings for Addressable Strip (GPIO 4)
#define NUM_ADDRESSABLE_LEDS 3 // How many LEDs are in your strip?
#define LED_BRIGHTNESS 128 // 0 to 255 (Global brightness)

// Settings for Static/Breathing Modes (Ignored in Debug Mode)
// Set your preferred color (0-255)
#define LED_COLOR_R 0   // Red
#define LED_COLOR_G 255 // Green
#define LED_COLOR_B 0   // Blue (Cyan)

// --- PIN DEFINITIONS ---
#define MAG_POWER_PIN 15

// QT Py local button pins
#define BUTTON1_PIN A0
#define BUTTON2_PIN A1
#define BUTTON3_PIN A2
#define BUTTON4_PIN A3

// MCP23017 pins
#define MENU_PIN              0
#define FIT_PIN               1
#define LOCK_PIN              2
#define ESC_PIN               3
#define CTRL_PIN              4
#define ALT_PIN               5
#define SHIFT_PIN             6
#define TOP_Quickview_PIN     7
#define RIGHT_Quickview_PIN   8
#define FRONT_Quickview_PIN   9
#define ROTATION_PIN          10

// MCP23017 I2C address
#define MCP23017_I2C_ADDRESS  0x20

// --- SENSOR SETTINGS ---
// SENSITIVITY: 150.0 is the "Golden" value for this sensor
#define CONFIG_TRANS_SCALE 100
#define CONFIG_ZOOM_SCALE 50
#define CONFIG_ROT_SCALE 40

// DEADZONES: Keep small (1.0) because raw values are tiny
#define CONFIG_DEADZONE 1.0
#define CONFIG_ZOOM_DEADZONE 2.5

// --- USB IDENTIFICATION ---
#define USB_VID 0x256f
#define USB_PID 0xc631

// --- DEBUG MODE ---
// MUST be false for normal use. True = Serial Monitor but NO Driver.
#define DEBUG_MODE false

#endif // USER_CONFIG_H
