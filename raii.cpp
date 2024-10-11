#include <cstdio>
#include <iostream>
#include <memory>

//Common uses:
// 1. File Handling
// 2. Mem mgmnt
// 3. Thread sync.

//No fclose is there...
void functionWithoutRAII() {
    FILE* file = fopen(".gitignore", "w");
    if (!file) return;
    //...
    std::cout<<"Acquired file!\n";
}

class FileHandler {
    FILE* file;
public:
    FileHandler(const char* filename, const char* mode) {
        file = fopen(filename, mode);
        if (!file) throw std::runtime_error("Failed to open");
    }
    ~FileHandler() {
        if (file) {
            fclose(file);
        }
    }
    void write(const char* content) {
        if (file) fprintf(file, "%s", content);
    }
};


int main() {
    
    std::unique_ptr<int[]> array(new int[10]);

    try {
        FileHandler file(".gitignore", "w");
        file.write("Hello, with RAII!");
    }
    catch(...) {
        return -1;
    }

    
    return 0;
}