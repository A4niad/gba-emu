#include "gbc/cpu/registers.hpp"

uint16_t Registers::getAF() const
{
    return (static_cast<uint16_t>(A) << 8) | F;
}

uint16_t Registers::getBC() const
{
    return (static_cast<uint16_t>(B) << 8) | C;
}

uint16_t Registers::getDE() const
{
    return (static_cast<uint16_t>(D) << 8) | E;
}

uint16_t Registers::getHL() const
{
    return (static_cast<uint16_t>(H) << 8) | L;
}

void Registers::setAF(uint16_t value)
{
    A = static_cast<uint8_t>(value >> 8);
    F = static_cast<uint8_t>(value & 0xFF);
}

void Registers::setBC(uint16_t value)
{
    B = static_cast<uint8_t>(value >> 8);
    C = static_cast<uint8_t>(value & 0xFF);
}

void Registers::setDE(uint16_t value)
{
    D = static_cast<uint8_t>(value >> 8);
    E = static_cast<uint8_t>(value & 0xFF);
}

void Registers::setHL(uint16_t value)
{
    H = static_cast<uint8_t>(value >> 8);
    L = static_cast<uint8_t>(value & 0xFF);
}

bool Registers::getZ() const
{
    return F & 0x80;
}

bool Registers::getN() const
{
    return F & 0x40;
}

bool Registers::getH() const
{
    return F & 0x20;
}

bool Registers::getC() const
{
    return F & 0x10;
}

void Registers::setZ(bool value)
{
    if (value)
        F |= 0x80;
    else
        F &= 0x80;
}

void Registers::setN(bool value)
{
    if (value)
        F |= 0x40;
    else
        F &= 0x40;
}

void Registers::setH(bool value)
{
    if (value)
        F |= 0x20;
    else
        F &= 0x20;
}

void Registers::setC(bool value)
{
    if (value)
        F |= 0x10;
    else
        F &= 0x10;
}



