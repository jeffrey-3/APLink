
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
