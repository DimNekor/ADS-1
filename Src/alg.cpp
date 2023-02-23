// Copyright 2022 NNTU-CS
#include <cstdint>
#include  "alg.h"


bool checkPrime(uint64_t) {
        for (int i = 2; i * i <= value; i++) {
          if (value % i == 0) return false;
        }
        return true;
}

uint64_t nPrime(uint64_t n) {
        uint64_t value = 2;
        uint64_t counter = 1;
        char flag;
        while (counter != n + 1) {
                flag = 1;
                for (int i = 2; i * i <= value; i++) {
                  if (value % i == 0) {
                    flag = 0;
                    break;
                  }
                }
                value += 1;
                if (flag) counter += 1;
        }
        return value - 1;
}

uint64_t nextPrime(uint64_t value) {
        value++;
        bool unfound = true, flag = true;
        while (unfound) {
                flag = true;
                for (int i = 2; i * i <= value; i++) {
                  if (value % i == 0) {
                    flag = false;
                    break;
                  }
                }
                value++;
                if (flag) unfound = false;
        }
        return value - 1;
}

uint64_t sumPrime(uint64_t hbound) {
        uint64_t sum = 0;
        uint64_t value = 2;
        bool flag;
        while (value < hbound) {
                flag = true;
                for (int i = 2; i * i <= value; i++) {
                  if (value % i == 0) {
                    flag = false;
                    break;
                  }
                }
                value++;
                if (flag) sum += value - 1;
        }
        return sum;
}
