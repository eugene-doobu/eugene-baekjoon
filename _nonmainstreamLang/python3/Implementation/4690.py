for i in range(5, 101):
    for x in range(2, i):
        for y in range(x, i):
            for z in range(y, i):
                if i**3 == x**3 + y**3 + z**3:
                    print(f"Cube = {i}, Triple = ({x},{y},{z})")
