import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ajval/Digital-Twin-Cybersecurity/x500_model/install/px4_offboard'
