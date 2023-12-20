count = 0

def mergesort(array, offset):
    length = len(array)
    
    if length > 1:
        first = array.copy()
        
        first_length = length // 2
        second_start = first_length
        second_length = length - second_start
        second = first[second_start:]
        
        first = mergesort(first[:first_length], offset)
        second = mergesort(second, offset + second_start)
        
        i = 0
        j = 0
        pos = 0
        
        global count
        while i < first_length and j < second_length:
            if first[i] < second[j]:
                array[pos] = first[i]
                i += 1
            else:
                array[pos] = second[j]
                j += 1
                count += first_length - i
            pos += 1
        
        while i < first_length:
            array[pos] = first[i]
            i += 1
            pos += 1
        while j < second_length:
            array[pos] = second[j]
            j += 1
            pos += 1
            
    return array

N = int(input())

array = [int(x) for x in input().split()]

mergesort(array, 0)

if count % 2 == 0:
    print("Carlos")
else:
    print("Marcelo")
