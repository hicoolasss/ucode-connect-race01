#include "../inc/minilibmx.h"
bool mx_is_equal_to_res(int num, int count_digits_res, int res) {
    if (count_digits_res > 0) {
        int count = mx_count_digits(num);
        return count <= count_digits_res; //длинна num <= кол-ву ??? в res
    }
    return num == res;
}
