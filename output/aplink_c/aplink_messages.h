
#ifndef APLINK_H_
#define APLINK_H_ 

// Auto-generated C

#include "aplink.h" 
#include <stdint.h>
#include <string.h>

  
#define NAV_DISPLAY_MSG_ID 0

#pragma pack(push, 1)
typedef struct aplink_nav_display 
{
    
    float pos_est_north;
    
    float pos_est_east;
    
    uint8_t current_waypoint;
    
} aplink_nav_display_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_nav_display_pack(aplink_nav_display_t* data, uint8_t packet[], uint8_t msg_id) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), msg_id);
}
                    
inline bool aplink_nav_display_unpack(aplink_msg_t* msg, aplink_nav_display_t* output, uint8_t expected_msg_id) {
    if (msg->msg_id == expected_msg_id && msg->payload_len == sizeof(T)) {
        memcpy(output, msg->payload, sizeof(T));
        return true;
    }
    return false;
}
  
#define CAL_SENSORS_MSG_ID 1

#pragma pack(push, 1)
typedef struct aplink_cal_sensors 
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
    
} aplink_cal_sensors_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_cal_sensors_pack(aplink_cal_sensors_t* data, uint8_t packet[], uint8_t msg_id) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), msg_id);
}
                    
inline bool aplink_cal_sensors_unpack(aplink_msg_t* msg, aplink_cal_sensors_t* output, uint8_t expected_msg_id) {
    if (msg->msg_id == expected_msg_id && msg->payload_len == sizeof(T)) {
        memcpy(output, msg->payload, sizeof(T));
        return true;
    }
    return false;
}
  
#define COMMAND_MSG_ID 2

#pragma pack(push, 1)
typedef struct aplink_command 
{
    
    uint8_t command_id;
    
} aplink_command_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_command_pack(aplink_command_t* data, uint8_t packet[], uint8_t msg_id) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), msg_id);
}
                    
inline bool aplink_command_unpack(aplink_msg_t* msg, aplink_command_t* output, uint8_t expected_msg_id) {
    if (msg->msg_id == expected_msg_id && msg->payload_len == sizeof(T)) {
        memcpy(output, msg->payload, sizeof(T));
        return true;
    }
    return false;
}
  
#define WAYPOINT_MSG_ID 3

#pragma pack(push, 1)
typedef struct aplink_waypoint 
{
    
    uint32_t lat;
    
    uint32_t lon;
    
    float alt;
    
} aplink_waypoint_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_waypoint_pack(aplink_waypoint_t* data, uint8_t packet[], uint8_t msg_id) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), msg_id);
}
                    
inline bool aplink_waypoint_unpack(aplink_msg_t* msg, aplink_waypoint_t* output, uint8_t expected_msg_id) {
    if (msg->msg_id == expected_msg_id && msg->payload_len == sizeof(T)) {
        memcpy(output, msg->payload, sizeof(T));
        return true;
    }
    return false;
}
  
#define CALIBRATE_MSG_ID 4

#pragma pack(push, 1)
typedef struct aplink_calibrate 
{
    
    bool acknowledgement;
    
} aplink_calibrate_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_calibrate_pack(aplink_calibrate_t* data, uint8_t packet[], uint8_t msg_id) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), msg_id);
}
                    
inline bool aplink_calibrate_unpack(aplink_msg_t* msg, aplink_calibrate_t* output, uint8_t expected_msg_id) {
    if (msg->msg_id == expected_msg_id && msg->payload_len == sizeof(T)) {
        memcpy(output, msg->payload, sizeof(T));
        return true;
    }
    return false;
}
  
#define VFR_HUD_MSG_ID 5

#pragma pack(push, 1)
typedef struct aplink_vfr_hud 
{
    
    int16_t roll;
    
    int16_t pitch;
    
    int16_t yaw;
    
    int16_t alt;
    
    int16_t alt_sp;
    
    int16_t spd;
    
    int16_t spd_sp;
    
} aplink_vfr_hud_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_vfr_hud_pack(aplink_vfr_hud_t* data, uint8_t packet[], uint8_t msg_id) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), msg_id);
}
                    
inline bool aplink_vfr_hud_unpack(aplink_msg_t* msg, aplink_vfr_hud_t* output, uint8_t expected_msg_id) {
    if (msg->msg_id == expected_msg_id && msg->payload_len == sizeof(T)) {
        memcpy(output, msg->payload, sizeof(T));
        return true;
    }
    return false;
}

                    
#endif /* APLINK_H_ */