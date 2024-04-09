#include <Arduino.h>
#include "Letter.h"

Letter::Letter(int _start, int _end){
  start = _start;
  end = _end;
}
int Letter::get_start(){
  return start;
}
int Letter::get_end(){
  return end;
}