#include "Serializer.hpp"
#include <iostream>

#include "Serializer.hpp"

int main() {
    Data data = {42, "Example", 3.12};

    uintptr_t raw = Serializer::serialize(&data);
    std::cout << "Serialized uintptr_t: " << raw << std::endl;

    Data* deserializedData = Serializer::deserialize(raw);

    if (deserializedData == &data) 
    {
        std::cout << "Deserialization successful!" << std::endl;
        std::cout << "Data ID: " << deserializedData->id << ", Name: " << deserializedData->name << std::endl;
    } 
    else 
    {
        std::cout << "Deserialization failed!" << std::endl;
    }

    return 0;
}
