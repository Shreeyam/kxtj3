#ifndef _KXTJ3_REGISTERS_H_
#define _KXTJ3_REGISTERS_H_

#include <Arduino.h>

// Data registers
const uint8_t XOUT_L = 0x06;
const uint8_t XOUT_H = 0x07;
const uint8_t YOUT_L = 0x08;
const uint8_t YOUT_H = 0x09;
const uint8_t ZOUT_L = 0x0A;
const uint8_t ZOUT_H = 0x0B;

const uint8_t DCST_RESP = 0x0C;

// ID
const uint8_t WHO_AM_I = 0x0F;

// Interrupts
const uint8_t INT_SOURCE1 = 0x16; 
const uint8_t INT_SOURCE2 = 0x17; 

const uint8_t STATUS_REG = 0x18; 

const uint8_t INT_REL = 0x1A; 

// Control registers
const uint8_t CTRL_REG1 = 0x1B;
const uint8_t CTRL_REG2 = 0x1D;

const uint8_t INT_CTRL_REG1 = 0x1E;
const uint8_t INT_CTRL_REG2 = 0x1F;

const uint8_t DATA_CTRL_REG = 0x21;

// Wakeup/Misc
const uint8_t WAKEUP_COUNTER = 0x29;
const uint8_t NA_COUNTER = 0x2A;
const uint8_t SELF_TEST = 0x3A;

const uint8_t WAKEUP_THRESHOLD_H = 0x6A;
const uint8_t WAKEUP_THRESHOLD_L = 0x6B;

#endif // !_KXTJ3_REGISTERS_H_