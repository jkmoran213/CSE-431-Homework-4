def insertion_sort(val_list):
    for i in range(1, len(val_list)):
        swap_index = i - 1
        key = val_list[i]
        while swap_index >= 0 and key < val_list[swap_index]:
            val_list[swap_index + 1] = val_list[swap_index]
            swap_index -= 1
        val_list[swap_index + 1] = key
    return val_list
            

