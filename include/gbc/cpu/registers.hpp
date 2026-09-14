#pragma once

#include <cstdint>

struct Registers {
    // 8-bit Registers
    uint8_t A;
    uint8_t F;

    uint8_t B;
    uint8_t C;

    uint8_t D;
    uint8_t E;

    uint8_t H;
    uint8_t L;

    // Special 16-bit Registers 
    uint16_t PC;
    uint16_t SP;

    // 16-bit Register Access Helper Functions
    uint16_t getAF() const;
    uint16_t getBC() const;
    uint16_t getDE() const;
    uint16_t getHL() const;

    void setAF(uint16_t value);
    void setBC(uint16_t value);
    void setDE(uint16_t value);
    void setHL(uint16_t value);

    // Flag Helper Functions
    bool getZ() const;
    bool getN() const;
    bool getH() const;
    bool getC() const;

    void setZ(bool value);
    void setN(bool value);
    void setH(bool value);
    void setC(bool value);

};