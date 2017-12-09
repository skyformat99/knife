//
// Created by xf on 2017/12/9.
//

#include "knife.hpp"

void usage_$py() {
    $py("a = 1/3.0");
    $py_get(float, a);
    printf("C++ %f\n", a);
}

void usage_$sql() {

}

void usage_$bash() {

}

int main() {
    usage_$py();
    return 0;
}