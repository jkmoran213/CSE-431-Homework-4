import time
def mergesort(val_list):
    if len(val_list) > 1:
        mid_index = len(val_list) // 2
        left = val_list[:mid_index]
        right = val_list[mid_index:]
        
        mergesort(left)
        mergesort(right)
        
        val_index = 0
        l_index = 0
        r_index = 0
        
        while r_index < len(right) and l_index < len(left):
            if right[r_index] < left[l_index]:
                val_list[val_index] = right[r_index]
                r_index += 1
            else:
                val_list[val_index] = left[l_index]
                l_index += 1
            val_index += 1
            
        while r_index < len(right):
            val_list[val_index] = right[r_index]
            r_index += 1
            val_index += 1
            
        while l_index < len(left):
            val_list[val_index] = left[l_index]
            l_index += 1
            val_index += 1
    return(val_list)
        

