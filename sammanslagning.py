S = open("Sammanslagen-historia.md", "a")


G2 = open("G2-Presentation-PY.md", "r")


G4 = open("G4-Fordjupning-Py.md", "r")


G7 = open("G7-Konfliktlosning-Py.md", "r")


S.write(G2.read())
G2.close


S.write(G4.read())
G4.close


S.write(G7.read())
G7.close


S.close
