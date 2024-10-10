#include <vector>
#include <iostream>

auto add(int a, int b) {return a + b;}

int main() {
    /*
    //Basic explanation
    auto x = 10; // x will deduce to an int.
    auto y = 3.14; //will deduce to a double.
    auto z = "Hello"; //const char*
    */
    /*
    //Works on complex types to improve readability.
    std::vector<std::string> vec;
    //std::vector<std::string>::iterator it = vec.begin();
    auto it = vec.begin();
    */
    /*
    // This is how we wrote the code back in the olden days.
    std::vector<int> vec = {1,2,3,4,5};
    std::vector<int>::iterator it;
    for(it = vec.begin(); it != vec.end(); ++it)
        std::cout<<*it<<" ";
    */
    /*
    // Isn't this simpler?
    std::vector<int> vec = {1,2,3,4,5};
    for(auto it = vec.begin(); it != vec.end(); ++it)
        std::cout<<*it<<" ";
    */
    /*
    //Lambda types can be hard to comprehend, and they can change in time.
    auto lambda = [](int a, int b) {return a + b;};
    std::cout << lambda(3,5);
    */
    /*
    //Works on return types too. Check the function above!
    std::cout << add(3,5);
    */
    return 0;
}