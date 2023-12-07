
def is_bisestile(anno):
    if anno % 4 == 0:
        if anno % 100 == 0:
            if anno % 400 == 0:
                return True
            else:
                return False
        else:
            return True
    else:
        return False

anno = int(input("bisestile"))
if is_bisestile(anno):
    print(f"{anno} è un anno bisestile.")
else:
    print(f"{anno} non è un anno bisestile.")
