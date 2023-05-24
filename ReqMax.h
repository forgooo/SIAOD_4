#pragma once
#include <iostream>

int count_largest(int max_num, int count) {
    int num;
    std::cin >> num;

    if (num == 0) {
        return count;
    } else if (num > max_num) {
        return count_largest(num, 1);
    } else if (num == max_num) {
        return count_largest(max_num, count + 1);
    } else {
        return count_largest(max_num, count);
    }
}

void req_max() {
    int count = count_largest(0, 0);
    std::cout << "Max num repeats " << count << " times" << std::endl;
}
