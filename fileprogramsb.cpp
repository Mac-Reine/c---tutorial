#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Product {
public:
    string name;
    double price;

    void inputDetails() {
        cout << "Enter product name: ";
        getline(cin >> ws, name);

        cout << "Enter product price: ";
        cin >> price;
    }

    void display() {
        cout << "Product: " << name << ", Price: " << price << endl;
    }
};

int main() {
    Product product;

    // Input product details from the user
    product.inputDetails();

    // Write the object to a binary file
    ofstream file("product.bin", ios::binary);
    if (file.is_open()) {
        file.write(reinterpret_cast<const char*>(&product), sizeof(product));
        file.close();
        cout << "Product details written to product.bin" << endl;
    }
    else {
        cerr << "Unable to open the file." << endl;
        return 1;
    }

    // Read the object from the binary file
    Product loadedProduct;
    ifstream inputFile("product.bin", ios::binary);
    if (inputFile.is_open()) {
        inputFile.read(reinterpret_cast<char*>(&loadedProduct), sizeof(loadedProduct));
        inputFile.close();
    }
    else {
        cerr << "Unable to open the file." << endl;
        return 1;
    }

    // Display the loaded object
    loadedProduct.display();

return 0;
}
