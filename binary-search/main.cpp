#include<iostream>

int binary_search(int arr[], int trget, int left, int right) {

    int mid = (right - left) / 2;

    if(trget == arr[mid]) { //The mid point is the location of the target
        return mid;
    }
    else if(trget < arr[mid]) { //The target is in the left side
        binary_search(arr, trget, left, mid - 1);
    }
    else { //The target is in the right side
        binary_search(arr, trget, mid + 1, right);
    }

    return -1;

}

int main() {

    int mid_point, elements, result, target;

    int my_array[] = {0,1,2,3,4,5,6,7,8,9};

    target = 4; //The value we want to find
    elements = (sizeof(my_array)/sizeof(my_array[0])); //Number of elements in my_array

    result = binary_search(my_array, target, 0, elements - 1);

    if (result == -1) {
        std::cout << "Target does not exist" << "\n";
    }
    else {
        std::cout << "Target Location = " << result << "\n";
    }

    



    return 0;
}