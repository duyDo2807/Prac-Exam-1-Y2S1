#ifndef BAGOFHOLDING_H
#define BAGOFHOLDING_H
#include <stdlib.h>

class BagOfHolding {
    private:
      int numItems;
    public:
      BagOfHolding();
      void addItem();
      void removeItem();
};

#endif