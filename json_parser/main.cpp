#include <iostream>
#include "json.h"
#include "parser.h"
using namespace std;

using namespace yt::json;

int main() {
    // Json arr;
    // arr[0] = true;
    Json obj;
    obj["bool"] = true;
    obj["int"] = 123;
    obj["double"] = 1.23;
    return 0;
}