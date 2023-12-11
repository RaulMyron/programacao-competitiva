n = int(input())

for _ in range(n):
    
    input()
      
    pairs = set()
    
    for x in sorted(map(int, input().split()), reverse=True):
        if not (x & 1):
            pairs.add(x)
    
    op = 0 
     
    while pairs:
      aux = max(pairs)
      pairs.remove(aux)
      aux //= 2
      if aux % 2 == 0:
        pairs.add(aux)
      op += 1
      
    print(op)