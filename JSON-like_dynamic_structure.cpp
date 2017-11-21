#include <iostream>

using namespace std;

struct json {
    string key;
    json *value;
};

json *primaryInitialization(string);
void show(json *);
void show(json *, int);

int main() {
    string arr[8] = {"A", "B", "C", "D", "E", "F", "G", "H"};
    json *result, *buffer;

    result = primaryInitialization("A");

    for (int i = 1; i < 8; i++) {
        buffer = result;
        result = new json;
        result->key = arr[i];
        result->value = buffer;
    }

    show(result);

    return 0;
}

json *primaryInitialization(string key) {
    json *subjson = new json;
    subjson->key = key;
    subjson->value = 0;
    return subjson;
}

void show(json *value) {
    cout << value->key << " => " << endl;
    if (value->value != 0) {
        int step = 0;
        show(value->value, step);
    }
}

void show(json *value, int step) {
    step++;
    string indent = "";
    int i = step;
    while (i > 0) {
        indent += "    ";
        i--;
    }
    cout << indent << value->key << " => " << endl;
    if (value->value != 0) {
        show(value->value, step);
    }
}
