#ifndef HYPED_GIT_WSHOP_POD_H
#define HYPED_GIT_WSHOP_POD_H
#include "bms.h"

#include <string>

/// TASK 10.1 (BOTH) ///////////////////////////////////////////////////////////
#include "navigation.h"

/// END OF TASK 10.1 (BOTH) ////////////////////////////////////////////////////


class Pod
{
  public:
    Pod();

    std::string get_name();
    double get_max_speed();
    /// TASKS 3 (PERSON A) & 4 (PERSON B) //////////////////////////////////////
    double get_temperature();
    /// END OF TASKS 3A & 4B ///////////////////////////////////////////////////
    double get_pressure();

    /// TASK 10.2 (BOTH) ///////////////////////////////////////////////////////
    BatteryManagementSystem bms;
    Navigation nav;
    /// END OF TASK 10.2 (BOTH) ////////////////////////////////////////////////
};


#endif //HYPED_GIT_WSHOP_POD_H
