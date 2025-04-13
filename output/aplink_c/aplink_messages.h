
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
  
#define WAYPOINT_MSG_ID 3

struct aplink_waypoint 
{
    
    uint32_t lat;
    
    uint32_t lon;
    
    float alt;
    
};
                    
void aplink_waypoint_pack()
{
    
}
  
#define CALIBRATE_MSG_ID 4

struct aplink_calibrate 
{
    
    bool acknowledgement;
    
};
                    
void aplink_calibrate_pack()
{
    
}
  
#define VFR_HUD_MSG_ID 5

struct aplink_vfr_hud 
{
    
    int16_t roll;
    
    int16_t pitch;
    
    int16_t yaw;
    
    int16_t alt;
    
    int16_t alt_sp;
    
    int16_t spd;
    
    int16_t spd_sp;
    
};
                    
void aplink_vfr_hud_pack()
{
    
}

                    
#endif /* APLINK_H_ */