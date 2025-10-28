import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/mimi/voice_km/2025_SUMMER_LT/voice_km/voice_km_ws/install/voice_service'
