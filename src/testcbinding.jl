cd(joinpath(@__FILE__, "..", ".."))
pwd()
using Pkg
Pkg.activate(".")
Pkg.status()

using CBinding

c`-std=c99 -fparse-all-comments -I$(pwd())/cffi -L$(pwd())/target/debug -lffitests`

c"""
#include <stdint.h>

uint32_t addition(uint32_t a, uint32_t b);
  
"""

t = c"addition"(Cuint(32), Cuint(32))