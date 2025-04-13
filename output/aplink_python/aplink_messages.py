
# Auto-generated Python

import struct
from output.aplink_python.aplink_helpers import APLink

        
class aplink_nav_display:
    format = "=ffB"
    msg_id = 0  
                      
    
    pos_est_north = None
    
    pos_est_east = None
    
    current_waypoint = None
    
    
    def unpack(self, payload: bytes):
        if len(payload) != struct.calcsize(self.format):
            return False
                    
        self.pos_est_north, self.pos_est_east, self.current_waypoint, = struct.unpack(self.format, payload)
                    
        return True
    
    def pack(self, pos_est_north, pos_est_east, current_waypoint):
        payload = struct.pack(format, pos_est_north, pos_est_east, current_waypoint)
        return APLink().pack(payload, self.msg_id)
        
class aplink_cal_sensors:
    format = "=fffffffff"
    msg_id = 1  
                      
    
    gx = None
    
    gy = None
    
    gz = None
    
    ax = None
    
    ay = None
    
    az = None
    
    mx = None
    
    my = None
    
    mz = None
    
    
    def unpack(self, payload: bytes):
        if len(payload) != struct.calcsize(self.format):
            return False
                    
        self.gx, self.gy, self.gz, self.ax, self.ay, self.az, self.mx, self.my, self.mz, = struct.unpack(self.format, payload)
                    
        return True
    
    def pack(self, gx, gy, gz, ax, ay, az, mx, my, mz):
        payload = struct.pack(format, gx, gy, gz, ax, ay, az, mx, my, mz)
        return APLink().pack(payload, self.msg_id)
        
class aplink_command:
    format = "=B"
    msg_id = 2  
                      
    
    command_id = None
    
    
    def unpack(self, payload: bytes):
        if len(payload) != struct.calcsize(self.format):
            return False
                    
        self.command_id, = struct.unpack(self.format, payload)
                    
        return True
    
    def pack(self, command_id):
        payload = struct.pack(format, command_id)
        return APLink().pack(payload, self.msg_id)
        
class aplink_waypoint:
    format = "=IIf"
    msg_id = 3  
                      
    
    lat = None
    
    lon = None
    
    alt = None
    
    
    def unpack(self, payload: bytes):
        if len(payload) != struct.calcsize(self.format):
            return False
                    
        self.lat, self.lon, self.alt, = struct.unpack(self.format, payload)
                    
        return True
    
    def pack(self, lat, lon, alt):
        payload = struct.pack(format, lat, lon, alt)
        return APLink().pack(payload, self.msg_id)
        
class aplink_calibrate:
    format = "=?"
    msg_id = 4  
                      
    
    acknowledgement = None
    
    
    def unpack(self, payload: bytes):
        if len(payload) != struct.calcsize(self.format):
            return False
                    
        self.acknowledgement, = struct.unpack(self.format, payload)
                    
        return True
    
    def pack(self, acknowledgement):
        payload = struct.pack(format, acknowledgement)
        return APLink().pack(payload, self.msg_id)
        
class aplink_vfr_hud:
    format = "=hhhhhhh"
    msg_id = 5  
                      
    
    roll = None
    
    pitch = None
    
    yaw = None
    
    alt = None
    
    alt_sp = None
    
    spd = None
    
    spd_sp = None
    
    
    def unpack(self, payload: bytes):
        if len(payload) != struct.calcsize(self.format):
            return False
                    
        self.roll, self.pitch, self.yaw, self.alt, self.alt_sp, self.spd, self.spd_sp, = struct.unpack(self.format, payload)
                    
        return True
    
    def pack(self, roll, pitch, yaw, alt, alt_sp, spd, spd_sp):
        payload = struct.pack(format, roll, pitch, yaw, alt, alt_sp, spd, spd_sp)
        return APLink().pack(payload, self.msg_id)
