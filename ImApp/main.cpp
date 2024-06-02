#include <iostream>
#include "imstaticlib.h"
#include "imsharedlib.h"
#include "imtweaklib.h"

int main(int argc, char *argv[])
{
    std::cout << "Hello, ImApp" << std::endl;
    hello_from_static_lib();
    hello_from_shared_lib();
    hello_from_tweak_lib();
    return 0;
}
