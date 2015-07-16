#include "line.h"

Line::Line(int length) {
    this->arr = new int[length];
}

Line::~Line() {
    delete [] this->arr;
}