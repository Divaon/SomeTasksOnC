#include <iostream>


int main()
{
   std::cout << "Task 2 " << std::endl;

#ifdef _MSC_VER
    std::cout << "Compilator: Microsoft Visual C++" << std::endl;
    std::cout << "Compilator version: " << _MSC_VER << std::endl;
#elif defined(__clang__)
    std::cout << "Compilator: Clang" << std::endl;
    std::cout << "Compilator version: " << __clang_major__ << "."
        << __clang_minor__ << "." << __clang_patchlevel__ << std::endl;
#elif defined(__GNUC__)
    std::cout << "Compilator:  GCC" << std::endl;
    std::cout << "Compilator version: " << __GNUC__ << "."
        << __GNUC_MINOR__ << "." << __GNUC_PATCHLEVEL__ << std::endl;
#else
    std::cout << "Compilator: Unknown" << std::endl;
#endif

    // Определение информации об операционной системе
#ifdef _WIN32
    std::cout << "OS: Windows" << std::endl;
#elif defined(__APPLE__) || defined(__MACH__)
    std::cout << "OS: macOS" << std::endl;
#elif defined(__linux__)
    std::cout << "OS: Linux" << std::endl;
#elif defined(__unix__)
    std::cout << "OS: Unix" << std::endl;
#else
    std::cout << "OS:: Unknown" << std::endl;
#endif


}

