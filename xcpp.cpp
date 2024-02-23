#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <file.cpp or file.c>" << std::endl;
        return 1;
    }
    std::string source_file = argv[1];
    std::string extension = source_file.substr(source_file.find_last_of(".") + 1);
    
    if (extension != "cpp" && extension != "c") {
        std::cerr << "Error: Input file must have a .cpp or .c extension" << std::endl;
        return 1;
    }
    std::string program_name = source_file.substr(0, source_file.find_last_of("."));
    std::string compiler_command;
    if (extension == "cpp") {
        compiler_command = "g++ -o " + program_name + " " + source_file;
    } else if (extension == "c") {
        compiler_command = "g++ -o " + program_name + " " + source_file;
    }
    int compilation_result = std::system(compiler_command.c_str());
    if (compilation_result != 0) {
        std::cerr << "Compilation failed" << std::endl;
        return compilation_result;
    }
    
    std::string run_command = "./" + program_name;
    int execution_result = std::system(run_command.c_str());
    
    if (execution_result != 0) {
        std::cerr << "Error: Execution failed" << std::endl;
        return execution_result;
    }
    
    return 0;
}
