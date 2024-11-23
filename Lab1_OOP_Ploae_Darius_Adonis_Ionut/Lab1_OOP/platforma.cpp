#include "platforma.h"
#include <iostream>

using namespace std;

#ifdef _WIN32
void mesajSpecificPlatformei() {
    cout << "Hello Windows User" << endl;
}
#elif __linux__
void mesajSpecificPlatformei() {
    cout << "Hello Linux User" << endl;
}
#else
void mesajSpecificPlatformei() {
    cout << "Hello From An Unknown OS User" << endl;
}
#endif
