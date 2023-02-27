#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>

class Product {
    QString title;
    int minutes;
    int last;

public:
    Product();
    Product(QString title, int minutes);

    void setTitle(QString title);
    void setMinutes(int minutes);
    void setLast(int last);

    QString getTitle() const;
    int getMinutes() const;
    int getLast() const;

    friend bool operator<(const Product left, const Product right) {
        return left.minutes < right.minutes;
    }
    friend bool operator>(const Product left, const Product right) {
        return left.minutes > right.minutes;
    }
    friend bool operator>=(const Product left, const Product right) {
        return left.minutes >= right.minutes;
    }
    friend bool operator<=(const Product left, const Product right) {
        return left.minutes <= right.minutes;
    }
};

#endif // PRODUCT_H
