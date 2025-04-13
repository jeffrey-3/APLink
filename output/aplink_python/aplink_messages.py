
# Auto-generated Python

import struct
from output.aplink_python.aplink_helpers import APLink

        
class aplink_nav_display:
    format = "=tffB"
    msg_id = 0  
                      
    
    pos_est_north = None
    
    pos_est_east = None
    
    current_waypoint = None
    
    
    def unpack(self, payload: bytes):
        if len(payload) != struct.calcsize(self.format):
            return False
                    
        self.pos_est_north, self.pos_est_east, self.current_waypoint, = struct.unpack(self.format, payload)
                    
        return True
    
    def pack(self):
        payload = struct.pack(format, self.pos_est_north, self.pos_est_east, self.current_waypoint)
        return APLink().pack(payload, self.msg_id)
        
class aplink_cal_sensors:
    format = "=tfffffffff"
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
    
    def pack(self):
        payload = struct.pack(format, self.gx, self.gy, self.gz, self.ax, self.ay, self.az, self.mx, self.my, self.mz)
        return APLink().pack(payload, self.msg_id)
        
class aplink_command:
    format = "=tB"
    msg_id = 2  
                      
    
    command_id = None
    
    
    def unpack(self, payload: bytes):
        if len(payload) != struct.calcsize(self.format):
            return False
                    
        self.command_id, = struct.unpack(self.format, payload)
                    
        return True
    
    def pack(self):
        payload = struct.pack(format, self.command_id)
        return APLink().pack(payload, self.msg_id)
        
class aplink_waypoint:
    format = "=tIIf"
    msg_id = 3  
                      
    
    lat = None
    
    lon = None
    
    alt = None
    
    
    def unpack(self, payload: bytes):
        if len(payload) != struct.calcsize(self.format):
            return False
                    
        self.lat, self.lon, self.alt, = struct.unpack(self.format, payload)
                    
        return True
    
    def pack(self):
        payload = struct.pack(format, self.lat, self.lon, self.alt)
        return APLink().pack(payload, self.msg_id)
