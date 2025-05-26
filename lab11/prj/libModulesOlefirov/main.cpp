#include "struct_type_project_6.h"
#include <fstream>
#include <sstream>

Node* loadFromFile(const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    Node* head = nullptr;
    Node* tail = nullptr;

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        Product p;
        std::getline(ss, p.sectionNumber, '|');
        std::getline(ss, p.sectionName, '|');
        std::getline(ss, p.productCode, '|');
        std::getline(ss, p.productName, '|');

        if (!p.productCode.empty()) {
            Node* newNode = new Node{p, nullptr};
            if (!head) {
                head = tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }
    }

    return head;
}

void saveToFile(const std::string& filename, Node* head) {
    std::ofstream file(filename);
    Node* current = head;
    while (current) {
        file << current->data.sectionNumber << '|'
             << current->data.sectionName << '|'
             << current->data.productCode << '|'
             << current->data.productName << '\n';
        current = current->next;
    }
}
