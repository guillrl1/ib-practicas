#include "clase_box.h"

std::ostream& operator<<(std::ostream &out, const Box& box) {
  out << box.length_ << " x " << box.height_ << " x " << box.breadth_;
  return out;
}
std::istream& operator>>(std::istream &in, Box& box) {
  in >> box.length_;
  in >> box.height_;
  in >> box.breadth_;
  return in;
}
bool operator==(const Box& box1, const Box& box2) {
  return (box1.length_ == box2.length_ && box1.height_ == box2.height_ && box1.breadth_ == box2.breadth_);
}