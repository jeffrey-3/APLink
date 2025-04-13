
#ifndef APLINK_H_
#define APLINK_H_ 

// Auto-generated C
                    
#include <stdint.h>

  
#define NAV_DISPLAY_MSG_ID 0

struct aplink_nav_display 
{
    
    float pos_est_north;
    
    float pos_est_east;
    
    uint8_t current_waypoint;
    
};
                    
void aplink_nav_display_pack()
{
    
}
  
#define CAL_SENSORS_MSG_ID 1

struct aplink_cal_sensors 
{
    
    float gx;
    
    float gy;
    
    float gz;
    
    float ax;
    
    float ay;
    
    float az;
    
    float mx;
    
    float my;
    
    float mz;
    
};
                    
void aplink_cal_sensors_pack()
{
    
}
  
#define COMMAND_MSG_ID 2

struct aplink_command 
{
    
    uint8_t command_id;
    
};
                    
void aplink_command_pack()
{
    
}

                    
#endif /* APLINK_H_ */