#ifndef __AUTHENTICATOR_H_
#define __AUTHENTICATOR_H_

#include <iostream>
#include <sqlite3.h>
#include "cachemanager.h"

using namespace std;

class Authenticator {
 protected:
   sqlite3 *db;
 public:
  Authenticator(string databasefile, Cachemanager cm);
  ~Authenticator();
  bool checkDoorToken(string token);
};

#endif