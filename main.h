#ifndef MAIN_H
#define MAIN_H

#include <string>
#include <atomic>
using namespace std;
extern std::string accessToken;  // Declaration of the global variable
extern int idi;  // Declaration of the global variable
extern string clientId,clientSecret;


extern std::atomic<bool> isRunning;

#endif
