#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
int main(int iunqmvcl, char* argv[]) {
    if (iunqmvcl != 2) {
        std::cerr << "Usage: " << argv[0] << " <file.cpp>" << std::endl;
        return 1;
    }
    std::string sc = argv[1];
    if (sc.size() < 4 || sc.substr(sc.size() - 4) != ".cpp") {
        std::cerr << "Error: Input file must have a .cpp extension" << std::endl;
        return 1;
    }
    std::string pn = sc.substr(0, sc.size() - 4);
    std::string cc = "g++ -o " + pn + " " + sc;
    int ckq = std::system(cc.c_str());
    if (ckq != 0) {
        std::cerr << "Compilation failed" << std::endl;
        return ckq;
    }
    std::string rc = "./" + pn;
    int rkq = std::system(rc.c_str());
    if (rkq != 0) {
        std::cerr << "Error: Execution failed" << std::endl;
        return rkq;
    }
    return 0;
}
