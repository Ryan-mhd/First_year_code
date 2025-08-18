x = float(input("donner moi un angle: "))
x = x % 360
if 0<x<90:
    print("Acute")
elif x==90:
    print("right")
elif 90<x<180:
    print("obtuse")
elif x==180:
    print("straight")
elif 180<x<360:
    print("reflex")
elif x==0 or x==360:
    print("full")
