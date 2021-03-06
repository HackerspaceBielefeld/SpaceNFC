#ifndef __UTILS_H__
#define __UTILS_H__

#include <iostream>

using namespace std;

constexpr char hexmap[] = {'0', '1', '2', '3', '4', '5', '6', '7',
                           '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

extern string hex_str(uint8_t *data, int len);
extern uint64_t hexstr_to_uint64(string hexstr);
extern bool hexstr_to_chararray(string hexstr, uint8_t *buff, size_t bufflen);

struct ProductAmountPair {
  unsigned int id;
  unsigned int amount;
  ProductAmountPair(unsigned int id, unsigned int amount) {
    this->id = id;
    this->amount = amount;
  }

  friend std::ostream &operator<<(std::ostream &os, ProductAmountPair const &pp) {
    return os << "PP(" << pp.id << "," << pp.amount << ")";
  }
};


#endif