#include<iostream>
using namespace std;


main(){


template<class InputIt>
auto make_basic_string(InputIt first, InputIt last) {
    using T = typename std::iterator_traits<InputIt>::value_type;
    return std::basic_string<T>(first, last);
}
