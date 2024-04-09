#ifndef LETTER_H
#define LETTER_H

class Letter{
  public:
    Letter(int _start, int _end);
    int get_start();
    int get_end();
  private:
    int start;
    int end;
};

#endif