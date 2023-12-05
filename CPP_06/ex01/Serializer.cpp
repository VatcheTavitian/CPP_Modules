#include "Serializer.hpp"

Serializer::Serializer() {
    std::cout << "Serializer constructor called" << std::endl;
}

Serializer::~Serializer() {
    std::cout << "Serializer destructor called" << std::endl;
}

Serializer::Serializer(const Serializer& toCopy) {
    std::cout << "Serializer copy constructor called" << std::endl;
    *this = toCopy;
}

Serializer& Serializer::operator=(const Serializer& src) {
    std::cout << "Serializer equal operator called" << std::endl;
    if (this == &src)
        return *this;
    return (*this);
}

uintptr_t Serializer::serialize(Data* dataPtr) {
     std::cout << dataPtr->x;
    uintptr_t value = 0;
    return value;
}