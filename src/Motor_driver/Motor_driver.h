#ifndef LED_CONTROL_H
#define LED_CONTROL_H

#include "Arduino.h"

class Motor_pwm{
  public:|
    // Constructor
    Motor_pwm(int pwm_pin, int dir_pin1, int dir_pin2, bool tracked = false, bool inverted = false);

    // init pos tracking
    void init_pos_tracking(int hall1_pin, int hall1_min = 0, int hall1_max = 255, 
                           int hall2_pin, int hall2_min = 0, int hall2_max = 255,
                           int hall_diff, int offeset = 0);
                           
    // init rpm tracking
    void init_rpm_tracking(int hall1_pin, int hall1_min = 0, int hall1_max = 255, 
                           int thresh = 0);

    // Basic function to move the rotor smothly
    void update_param(int rpm_acc, int rpm_max, bool limit_pos = false, int pos_max = 360, int pos_min = -360);

    // update the motor
    void update_target_rpm(int rpm);


    void update_target_pos(int pos);

    void update_strength_dir(int strength);

  private:
    int _pin;
    bool _isOn;
};

#endif
