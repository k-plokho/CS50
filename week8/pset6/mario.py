import cs50

while True:
    print("Type a number between 0 and 23: ", end="")
    height = cs50.get_int()
    if height > 0 or height < 23:
        break

a = 0
for a  in range(a,height,+1):
    spaces = height - a
    for spaces  in range(spaces,0,-1):
        print(" ", end="")
    spaces = spaces - 1
    print("#" * (a+2), end="")
    print()
