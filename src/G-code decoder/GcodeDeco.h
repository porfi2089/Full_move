#ifndef LED_CONTROL_H
#define LED_CONTROL_H

#include "Arduino.h"

class Gdeco{
  public:|
    // Constructor
    Gdeco(int baudrate);

    // init Gdeco
    void init_Gdeco();
    
    int deco_comm();

    int deco_param(int index);

  private:
    int baudrate;
    
};

#endif
