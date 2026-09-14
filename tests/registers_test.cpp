#include <cassert>
#include <iostream>

#include "gbc/cpu/registers.hpp"

int main()
{
    Registers reg{};

    // --------------------------------------------------
    // Test 16-bit register getters
    // --------------------------------------------------

    reg.A = 0x12;
    reg.F = 0xB0;

    reg.B = 0x12;
    reg.C = 0x34;

    reg.D = 0x56;
    reg.E = 0x78;

    reg.H = 0xAB;
    reg.L = 0xCD;

    assert(reg.getAF() == 0x12B0);
    assert(reg.getBC() == 0x1234);
    assert(reg.getDE() == 0x5678);
    assert(reg.getHL() == 0xABCD);

    std::cout << "16-bit getter tests passed!\n";


    // --------------------------------------------------
    // Test 16-bit register setters
    // --------------------------------------------------

    reg.setAF(0x1234);
    assert(reg.A == 0x12);
    assert(reg.F == 0x34);

    reg.setBC(0x5678);
    assert(reg.B == 0x56);
    assert(reg.C == 0x78);

    reg.setDE(0x9ABC);
    assert(reg.D == 0x9A);
    assert(reg.E == 0xBC);

    reg.setHL(0xDEF0);
    assert(reg.H == 0xDE);
    assert(reg.L == 0xF0);

    std::cout << "16-bit setter tests passed!\n";


    // --------------------------------------------------
    // Test flags
    // --------------------------------------------------

    reg.F = 0x00;

    assert(!reg.getZ());
    assert(!reg.getN());
    assert(!reg.getH());
    assert(!reg.getC());

    reg.setZ(true);
    assert(reg.getZ());

    reg.setN(true);
    assert(reg.getN());

    reg.setH(true);
    assert(reg.getH());

    reg.setC(true);
    assert(reg.getC());

    std::cout << "Flag setter/getter tests passed!\n";


    // --------------------------------------------------
    // Test clearing flags
    // --------------------------------------------------

    reg.setZ(false);
    reg.setN(false);
    reg.setH(false);
    reg.setC(false);

    assert(!reg.getZ());
    assert(!reg.getN());
    assert(!reg.getH());
    assert(!reg.getC());

    std::cout << "Flag clearing tests passed!\n";


    // --------------------------------------------------
    // All tests passed
    // --------------------------------------------------

    std::cout << "\nAll Registers tests passed!\n";

    return 0;
}