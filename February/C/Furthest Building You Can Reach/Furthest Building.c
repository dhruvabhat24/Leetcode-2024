int binarySearch(int* stack, int size, int target) {
    int left = 0;
    int right = size;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (stack[mid] <= target) {
            result = mid;
            left = mid + 1;
        } 
        else right = mid - 1;
    }
    return result;
}

void shift(int* stack, int* idx, int target) {
    int id = -1;
    if((*idx) == -1) {
        stack[++(*idx)] = target;
        return;
    }
    if(target >= stack[(*idx)]) {
        stack[++(*idx)] = target;
        return;
    }
    id = binarySearch(stack, *idx, target);
    if(id == -1) id = 0;
    else id++;
    (*idx)++;
    
    for(int i = (*idx); i > id; i--) {
        stack[i] = stack[i-1];
    }
    stack[id] = target;
}

int furthestBuilding(int* heights, int heightsSize, int bricks, int ladders) {
    int* stack = malloc(heightsSize * sizeof(int));
    int idx = -1;
    int diff = 0;

    for(int i = 1; i < heightsSize; i++) {
        diff = heights[i] - heights[i-1];
        if(diff < 0) continue;
        if(diff <= bricks) {
            shift(stack, &idx, diff);
            bricks -= diff;
        }
        else {
            if(idx >= 0 && diff < stack[idx]) {
                bricks += stack[idx--] - diff;
                shift(stack, &idx, diff);
            }
            if(!(ladders)--) return i-1;
        }
    }
    return heightsSize-1;
}


