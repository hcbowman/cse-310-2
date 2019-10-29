#include<iostream>
#include<vector>
#include<random>

std::random_device rd;
std::mt19937 mt(rd());
std::uniform_real_distribution<int> dist(1, 25);

class max_heap {

    private:

    std::vector<int> vec_h;


    public:

    max_heap() {

        vec_h[0] = 0;

        for (int i = 0; i < 15; i++) {
            vec_h.push_back(dist(mt));
        }

    }
    max_heap(std::vector<int> vect) {
        this->vec_h = vect;
    }

    int parent(int i) {
        return i/2;
    }

    int get_left(int i) {
        return (i*2);
    }

    int get_right(int i) {
        return (i*2) + 1;
    }

    void heapify(int i) {

        int left = get_left(i);
        int right = get_right(i);


        if (left < vec_h.size() && vec_h.at(i) ) {

        }
        else {

        }

        if () {

        }

        if () {

        }

    }

    void build_heap() {

        for (int i = (vec_h.size/2); ; i--) {
            heapify(i);

        }

    }

    void heap_sort() {

    }






};


int main() {

   std::vector<int> vec_m = {1,2,3,4,5,6,7,8,9,10};






    return 0;

}