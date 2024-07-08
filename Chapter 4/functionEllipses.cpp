#include <iostream>
#include <cstdarg>
using namespace std;

int findMaximum(int count, ...) {
    int max, value;
    va_list list;

    va_start(list, count);

    // Initialize max with the first argument
    max = va_arg(list, int);

    for (int arg = 1; arg < count; ++arg)
    {
        value = va_arg(list, int); // Get the next argument
        if (max < value)
            max = value;
    }
    va_end(list);
    return max;
}

int main() {
    cout << findMaximum(4, 47, 86, 12, 15) << endl;
    cout << findMaximum(4, 45, 85, 15, 15) << endl;
    return 0;
}
