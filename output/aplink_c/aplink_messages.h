
#ifndef APLINK_MESSAGES_H_
#define APLINK_MESSAGES_H_ 

// Auto-generated C

#include "aplink.h" 
#include <stdint.h>
#include <string.h>
                    

enum PARAM_TYPE
{
    
    INT32,
    
    FLOAT,
    
};

enum COMMAND_ID
{
    
    CALIBRATE,
    
    LOAD_WAYPOINTS,
    
    HITL_ENABLE,
    
};


  
#define NAV_DISPLAY_MSG_ID 0

#pragma pack(push, 1)
typedef struct aplink_nav_display 
{
    
    
    float pos_est_north;
    
    
    
    float pos_est_east;
    
    
    
    uint8_t current_waypoint;
    
    
} aplink_nav_display_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_nav_display_pack(aplink_nav_display_t data, uint8_t packet[]) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), NAV_DISPLAY_MSG_ID);
}
                    
inline bool aplink_nav_display_unpack(aplink_msg_t* msg, aplink_nav_display_t* output) {
    if (msg->payload_len == sizeof(aplink_nav_display_t)) {
        memcpy(output, msg->payload, sizeof(aplink_nav_display_t));
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
                                   
inline uint16_t aplink_cal_sensors_pack(aplink_cal_sensors_t data, uint8_t packet[]) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), CAL_SENSORS_MSG_ID);
}
                    
inline bool aplink_cal_sensors_unpack(aplink_msg_t* msg, aplink_cal_sensors_t* output) {
    if (msg->payload_len == sizeof(aplink_cal_sensors_t)) {
        memcpy(output, msg->payload, sizeof(aplink_cal_sensors_t));
        return true;
    }
    return false;
}
  
#define WAYPOINT_MSG_ID 2

#pragma pack(push, 1)
typedef struct aplink_waypoint 
{
    
    
    int32_t lat;
    
    
    
    int32_t lon;
    
    
    
    float alt;
    
    
} aplink_waypoint_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_waypoint_pack(aplink_waypoint_t data, uint8_t packet[]) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), WAYPOINT_MSG_ID);
}
                    
inline bool aplink_waypoint_unpack(aplink_msg_t* msg, aplink_waypoint_t* output) {
    if (msg->payload_len == sizeof(aplink_waypoint_t)) {
        memcpy(output, msg->payload, sizeof(aplink_waypoint_t));
        return true;
    }
    return false;
}
  
#define VFR_HUD_MSG_ID 3

#pragma pack(push, 1)
typedef struct aplink_vfr_hud 
{
    
    
    int16_t roll;
    
    
    
    int16_t roll_sp;
    
    
    
    int16_t pitch;
    
    
    
    int16_t pitch_sp;
    
    
    
    int16_t yaw;
    
    
    
    int16_t alt;
    
    
    
    int16_t alt_sp;
    
    
    
    int16_t spd;
    
    
    
    int16_t spd_sp;
    
    
    
    uint8_t system_mode;
    
    
    
    uint8_t flight_mode;
    
    
    
    uint8_t manual_mode;
    
    
    
    uint8_t auto_mode;
    
    
} aplink_vfr_hud_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_vfr_hud_pack(aplink_vfr_hud_t data, uint8_t packet[]) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), VFR_HUD_MSG_ID);
}
                    
inline bool aplink_vfr_hud_unpack(aplink_msg_t* msg, aplink_vfr_hud_t* output) {
    if (msg->payload_len == sizeof(aplink_vfr_hud_t)) {
        memcpy(output, msg->payload, sizeof(aplink_vfr_hud_t));
        return true;
    }
    return false;
}
  
#define GPS_RAW_MSG_ID 4

#pragma pack(push, 1)
typedef struct aplink_gps_raw 
{
    
    
    int32_t lat;
    
    
    
    int32_t lon;
    
    
    
    uint8_t sats;
    
    
    
    bool fix;
    
    
} aplink_gps_raw_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_gps_raw_pack(aplink_gps_raw_t data, uint8_t packet[]) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), GPS_RAW_MSG_ID);
}
                    
inline bool aplink_gps_raw_unpack(aplink_msg_t* msg, aplink_gps_raw_t* output) {
    if (msg->payload_len == sizeof(aplink_gps_raw_t)) {
        memcpy(output, msg->payload, sizeof(aplink_gps_raw_t));
        return true;
    }
    return false;
}
  
#define HITL_SENSORS_MSG_ID 5

#pragma pack(push, 1)
typedef struct aplink_hitl_sensors 
{
    
    
    float imu_ax;
    
    
    
    float imu_ay;
    
    
    
    float imu_az;
    
    
    
    float imu_gx;
    
    
    
    float imu_gy;
    
    
    
    float imu_gz;
    
    
    
    float mag_x;
    
    
    
    float mag_y;
    
    
    
    float mag_z;
    
    
    
    float baro_asl;
    
    
    
    int32_t gps_lat;
    
    
    
    int32_t gps_lon;
    
    
    
    int16_t of_x;
    
    
    
    int16_t of_y;
    
    
} aplink_hitl_sensors_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_hitl_sensors_pack(aplink_hitl_sensors_t data, uint8_t packet[]) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), HITL_SENSORS_MSG_ID);
}
                    
inline bool aplink_hitl_sensors_unpack(aplink_msg_t* msg, aplink_hitl_sensors_t* output) {
    if (msg->payload_len == sizeof(aplink_hitl_sensors_t)) {
        memcpy(output, msg->payload, sizeof(aplink_hitl_sensors_t));
        return true;
    }
    return false;
}
  
#define HITL_COMMANDS_MSG_ID 6

#pragma pack(push, 1)
typedef struct aplink_hitl_commands 
{
    
    
    uint16_t rud_pwm;
    
    
    
    uint16_t ele_pwm;
    
    
    
    uint16_t thr_pwm;
    
    
} aplink_hitl_commands_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_hitl_commands_pack(aplink_hitl_commands_t data, uint8_t packet[]) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), HITL_COMMANDS_MSG_ID);
}
                    
inline bool aplink_hitl_commands_unpack(aplink_msg_t* msg, aplink_hitl_commands_t* output) {
    if (msg->payload_len == sizeof(aplink_hitl_commands_t)) {
        memcpy(output, msg->payload, sizeof(aplink_hitl_commands_t));
        return true;
    }
    return false;
}
  
#define WAYPOINTS_COUNT_MSG_ID 7

#pragma pack(push, 1)
typedef struct aplink_waypoints_count 
{
    
    
    uint8_t num_waypoints;
    
    
} aplink_waypoints_count_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_waypoints_count_pack(aplink_waypoints_count_t data, uint8_t packet[]) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), WAYPOINTS_COUNT_MSG_ID);
}
                    
inline bool aplink_waypoints_count_unpack(aplink_msg_t* msg, aplink_waypoints_count_t* output) {
    if (msg->payload_len == sizeof(aplink_waypoints_count_t)) {
        memcpy(output, msg->payload, sizeof(aplink_waypoints_count_t));
        return true;
    }
    return false;
}
  
#define REQUEST_WAYPOINT_MSG_ID 8

#pragma pack(push, 1)
typedef struct aplink_request_waypoint 
{
    
    
    uint8_t index;
    
    
} aplink_request_waypoint_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_request_waypoint_pack(aplink_request_waypoint_t data, uint8_t packet[]) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), REQUEST_WAYPOINT_MSG_ID);
}
                    
inline bool aplink_request_waypoint_unpack(aplink_msg_t* msg, aplink_request_waypoint_t* output) {
    if (msg->payload_len == sizeof(aplink_request_waypoint_t)) {
        memcpy(output, msg->payload, sizeof(aplink_request_waypoint_t));
        return true;
    }
    return false;
}
  
#define WAYPOINTS_ACK_MSG_ID 9

#pragma pack(push, 1)
typedef struct aplink_waypoints_ack 
{
    
    
    uint8_t waypoints_loaded;
    
    
} aplink_waypoints_ack_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_waypoints_ack_pack(aplink_waypoints_ack_t data, uint8_t packet[]) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), WAYPOINTS_ACK_MSG_ID);
}
                    
inline bool aplink_waypoints_ack_unpack(aplink_msg_t* msg, aplink_waypoints_ack_t* output) {
    if (msg->payload_len == sizeof(aplink_waypoints_ack_t)) {
        memcpy(output, msg->payload, sizeof(aplink_waypoints_ack_t));
        return true;
    }
    return false;
}
  
#define TIME_SINCE_EPOCH_MSG_ID 10

#pragma pack(push, 1)
typedef struct aplink_time_since_epoch 
{
    
    
    uint64_t microseconds;
    
    
} aplink_time_since_epoch_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_time_since_epoch_pack(aplink_time_since_epoch_t data, uint8_t packet[]) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), TIME_SINCE_EPOCH_MSG_ID);
}
                    
inline bool aplink_time_since_epoch_unpack(aplink_msg_t* msg, aplink_time_since_epoch_t* output) {
    if (msg->payload_len == sizeof(aplink_time_since_epoch_t)) {
        memcpy(output, msg->payload, sizeof(aplink_time_since_epoch_t));
        return true;
    }
    return false;
}
  
#define RC_INPUT_MSG_ID 11

#pragma pack(push, 1)
typedef struct aplink_rc_input 
{
    
    
    int8_t ail;
    
    
    
    int8_t ele;
    
    
    
    int8_t rud;
    
    
    
    int8_t thr;
    
    
} aplink_rc_input_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_rc_input_pack(aplink_rc_input_t data, uint8_t packet[]) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), RC_INPUT_MSG_ID);
}
                    
inline bool aplink_rc_input_unpack(aplink_msg_t* msg, aplink_rc_input_t* output) {
    if (msg->payload_len == sizeof(aplink_rc_input_t)) {
        memcpy(output, msg->payload, sizeof(aplink_rc_input_t));
        return true;
    }
    return false;
}
  
#define POWER_MSG_ID 12

#pragma pack(push, 1)
typedef struct aplink_power 
{
    
    
    uint16_t batt_volt;
    
    
    
    uint16_t batt_curr;
    
    
    
    uint16_t batt_used;
    
    
    
    uint16_t ap_curr;
    
    
} aplink_power_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_power_pack(aplink_power_t data, uint8_t packet[]) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), POWER_MSG_ID);
}
                    
inline bool aplink_power_unpack(aplink_msg_t* msg, aplink_power_t* output) {
    if (msg->payload_len == sizeof(aplink_power_t)) {
        memcpy(output, msg->payload, sizeof(aplink_power_t));
        return true;
    }
    return false;
}
  
#define PARAM_SET_MSG_ID 13

#pragma pack(push, 1)
typedef struct aplink_param_set 
{
    
    
    char name[16];
    
    
    
    uint8_t value[4];
    
    
    
    uint8_t type;
    
    
} aplink_param_set_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_param_set_pack(aplink_param_set_t data, uint8_t packet[]) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), PARAM_SET_MSG_ID);
}
                    
inline bool aplink_param_set_unpack(aplink_msg_t* msg, aplink_param_set_t* output) {
    if (msg->payload_len == sizeof(aplink_param_set_t)) {
        memcpy(output, msg->payload, sizeof(aplink_param_set_t));
        return true;
    }
    return false;
}
  
#define PARAMS_ACK_MSG_ID 14

#pragma pack(push, 1)
typedef struct aplink_params_ack 
{
    
    
    uint8_t params_loaded;
    
    
} aplink_params_ack_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_params_ack_pack(aplink_params_ack_t data, uint8_t packet[]) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), PARAMS_ACK_MSG_ID);
}
                    
inline bool aplink_params_ack_unpack(aplink_msg_t* msg, aplink_params_ack_t* output) {
    if (msg->payload_len == sizeof(aplink_params_ack_t)) {
        memcpy(output, msg->payload, sizeof(aplink_params_ack_t));
        return true;
    }
    return false;
}
  
#define COMMAND_MSG_ID 15

#pragma pack(push, 1)
typedef struct aplink_command 
{
    
    
    uint8_t command_id;
    
    
} aplink_command_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_command_pack(aplink_command_t data, uint8_t packet[]) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), COMMAND_MSG_ID);
}
                    
inline bool aplink_command_unpack(aplink_msg_t* msg, aplink_command_t* output) {
    if (msg->payload_len == sizeof(aplink_command_t)) {
        memcpy(output, msg->payload, sizeof(aplink_command_t));
        return true;
    }
    return false;
}
  
#define ACKNOWLEDGEMENT_MSG_ID 16

#pragma pack(push, 1)
typedef struct aplink_acknowledgement 
{
    
    
    uint8_t command_id;
    
    
} aplink_acknowledgement_t;
#pragma pack(pop)
                                   
inline uint16_t aplink_acknowledgement_pack(aplink_acknowledgement_t data, uint8_t packet[]) {
    uint8_t buffer[sizeof(data)];
    memcpy(buffer, &data, sizeof(data));
    return aplink_pack(packet, buffer, sizeof(buffer), ACKNOWLEDGEMENT_MSG_ID);
}
                    
inline bool aplink_acknowledgement_unpack(aplink_msg_t* msg, aplink_acknowledgement_t* output) {
    if (msg->payload_len == sizeof(aplink_acknowledgement_t)) {
        memcpy(output, msg->payload, sizeof(aplink_acknowledgement_t));
        return true;
    }
    return false;
}

                    
#endif /* APLINK_MESSAGES_H_ */