import serial
import time


def write_in_file():
    ser = serial.Serial('COM9', 115200, timeout=1)
    time.sleep(2)
    f = open("C:\\Users\\Admin\\OneDrive\\Desktop\\PennRelated\\ESE519\\Lab2\\recorder.txt", "w")
    if ser.is_open:
        print(ser.readline())
        f.write(str(ser.readline()))
        ser.close()
        f.close()
        # exit(0)

def send_from_file():
    ser = serial.Serial('COM9', 115200, timeout=1)
    time.sleep(2)
    file = open("C:\\Users\\Admin\\OneDrive\\Desktop\\PennRelated\\ESE519\\Lab2\\recorder.txt", "r")
    for element in file:
        ser.write(bytes(element, 'utf-8'))
        print(element)

write_in_file()

while True:
    x = input()
    if(x == 'r'):
        ser = serial.Serial('COM9', 115200, timeout=1)
        time.sleep(2)
        ser.write(b'r')
        ser.close()
        time.sleep(15)
        write_in_file()
    elif(x == 's'):
        ser = serial.Serial('COM9', 115200, timeout=1)
        time.sleep(2)
        ser.write(b'r')
        ser.close()
        time.sleep(15)
        write_in_file()
    elif(x == 'f'):
        ser = serial.Serial('COM9', 115200, timeout=1)
        time.sleep(2)
        ser.write(b'r')
        ser.close()
        time.sleep(15)
        write_in_file()
    else:
        ser = serial.Serial('COM9', 115200, timeout=1)
        time.sleep(2)
        ser.write(b'p')
        ser.close()
        send_from_file()