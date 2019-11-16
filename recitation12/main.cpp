#include<iostream>
#include<fstream>

int main() {

    float data;

    std::ifstream input_file("recitationExercise", std::ios::in);

    while(!input_file.eof()) {
        input_file.read( (char*)&data, 4 );
        std::cout << "data: "<< data << "\n";
    }

    input_file.close();


}