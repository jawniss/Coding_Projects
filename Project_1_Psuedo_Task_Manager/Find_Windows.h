#ifndef FIND_WINDOWS_H
#define FIND_WINDOWS_H

#include <string>
#include <iostream>
#include <Windows.h>

BOOL CALLBACK enumWindowCallback(HWND hWnd, LPARAM lparam);
void setGlobalWindowName( std::string name );

#endif