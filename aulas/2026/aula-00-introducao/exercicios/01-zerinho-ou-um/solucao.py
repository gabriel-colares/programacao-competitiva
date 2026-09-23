import sys


for linha in sys.stdin:
  alice, beto, clara = map(int, linha.split())

  if alice != beto and beto == clara:
    print("A")
  elif beto != alice and alice == clara:
    print("B")
  elif clara != alice and alice == beto:
    print("C")
  else:
    print("*")
