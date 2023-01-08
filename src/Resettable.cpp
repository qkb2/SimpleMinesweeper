#include "Resettable.h"
#include <iostream>

void Resettable::reset() {
    std::cerr<<"reset";
}

Resettable::~Resettable() {}