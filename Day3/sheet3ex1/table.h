//
// Created by Luccas on 27/09/2024.
//

#ifndef TABLE_H
#define TABLE_H

class table {
    static const int maxSize = 10;
    int matrix[maxSize]{};
public:
    table(int a = 0, int b = 0);
    void getValueAt(int index) const;
    void setValueAt(int index, int value);
    void printMatrix() const;

    bool checkIfExists(int value) const;

    int sumIndexes() const;

    bool operator==(const table &rhs) const;
};



#endif //TABLE_H
