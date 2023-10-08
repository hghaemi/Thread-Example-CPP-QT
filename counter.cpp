#include "counter.h"

counter::counter(QObject *parent) : QThread(parent)
{
   startflag=true;
   A=10;
}

void counter::run()
{
    while(startflag){
      A++;
      msleep(100);
      emit send(A);
    }
}
