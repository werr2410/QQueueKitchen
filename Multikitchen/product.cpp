#include "product.h"


Product::Product() : Product("", 0) {

}

Product::Product(QString title, int minutes)
{
    setTitle(title);
    setMinutes(minutes);
    setLast(minutes);
}

void Product::setTitle(QString title)
{
    this->title = title;
}

void Product::setMinutes(int minutes)
{
    if (minutes > 0)
        this->minutes = minutes;
}

void Product::setLast(int last)
{
    this->last = last;
}

QString Product::getTitle() const
{
    return title;
}

int Product::getMinutes() const
{
    return minutes;
}

int Product::getLast() const
{
 return last;
}



