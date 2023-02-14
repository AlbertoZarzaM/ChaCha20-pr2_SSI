

#ifndef CHACHA20_H
#define CHACHA20_H

#define ROUNDS 20

#include <cstring>
#include <array>
#include <vector>
#include <iostream>


uint32_t ROTL (uint32_t& x, int y);
void QR(uint32_t& a, uint32_t& b, uint32_t& c, uint32_t& d);
void chachablock (std::vector <uint32_t> const& in, std::vector <uint32_t>& out);
uint32_t tolittleendian(uint32_t& x);





#endif  // CHACHA20_H