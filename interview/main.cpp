#include "../test/Tests.h"
#include <cstring>

int main(int argc, char* argv[])
{
    if (argc == 2 && std::strcmp(argv[1], "test") == 0) {
        Tests tests;
        tests.RunTests();
    }
    return 0;
}