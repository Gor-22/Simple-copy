#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " source-file destination-file" << std::endl;
        return 1;
    }

    std::ifstream src(argv[1], std::ios::binary);
    if (!src) {
        std::cerr << "Error: Unable to open source file " << argv[1] << std::endl;
        return 1;
    }

    std::ofstream dest(argv[2], std::ios::binary);
    if (!dest) {
        std::cerr << "Error: Unable to open destination file " << argv[2] << std::endl;
        return 1;
    }

    dest << src.rdbuf();

    std::cout << "File copied successfully!" << std::endl;

    return 0;
}
