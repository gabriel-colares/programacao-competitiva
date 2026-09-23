quantidade = int(input())
andares = list(map(int, input().split()))

tempo_total = 0

for i in range(1, quantidade):
    tempo_total += abs(andares[i] - andares[i - 1])

print(tempo_total)
