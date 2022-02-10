#include "List.h"

List::List(int capacity, double multiplier) : capacity(capacity), current(0), multiplier(multiplier)
{
    array = (int*)malloc(capacity*sizeof(int));

    if ( array == NULL ) 
    {
        throw OutOfMemoryException();
    }
}

List:: ~List()
{
    free(array);
}

int List::size() const
{
    return current;
}

int List::max_size() const
{
    return capacity;
}

void List::erase(int index)
{
    if ( index > current || current == 0 )
    {
        throw ZeroLenException();
    }
    
    int newCurrent = current - 1;

    for ( ;index < size(); index++ )
    {
        array[index] = array[index+1];
    }
    
    if ( newCurrent < capacity - capacity * (multiplier - 1) )
    {
        int newCapacity = newCurrent * multiplier;
        int* newArray = (int*)realloc(array, newCapacity*sizeof(int));

        if ( newArray == NULL ) {
            throw OutOfMemoryException();
        }

        capacity = newCapacity;
        array = newArray;
    }
    current = newCurrent;
}

void List::insert(int value, int index)
{

    int newCurrent = current + 1;

    if ( newCurrent > capacity )
    {
        int newCapacity = capacity * multiplier;
        int* newArray = (int*)realloc(array, newCapacity*sizeof(int));

        if ( newArray == NULL )
        {
            throw OutOfMemoryException();
        }

        capacity = newCapacity;
        array = newArray;
    }
    if ( index == size() )
    {
        push_back(value);
    } else {
        for ( int i = 0; i < index; i++ )
        {
            array[size() -i] = array[size()-1 - i];
        }
        array[index] = value;
    }

    current = newCurrent;
}

int List::find(int value) const
{
    for ( int i = 0; i < size(); i++ ) {
        if ( array[i] == value ) {
            return i;
        }
    }
    return 0;
}

void List::push_back(int value)
{
    int newCurrent = current + 1;

    if ( newCurrent > capacity )
    {
        int newCapacity = capacity * multiplier;
        int* newArray = (int*)realloc(array, newCapacity*sizeof(int));

        if ( newArray == NULL )
        {
            throw OutOfMemoryException();
        }

        capacity = newCapacity;
        array = newArray;
    }
    array[current] = value;
    current = newCurrent;
}

int List::pop_back()
{
    if ( current == 0 )
    {
        throw ZeroLenException();
    }
    current -= 1;
    return array[current];
}

void List::sort()
{
    int min;
    
    for ( int i = 0; i < size(); i++ )
    {
        min = array[i];
        for ( int j = 0; j < i; j++ )
        {
            if ( array[j] > min )
            {
                min = array[j];
                array[j] = array[i];
                array[i] = min;
            }
        }
    }

}

int List::operator[](int index) const
{
    return array[index];
}

bool List::operator==(const List& other) const
{
    int i = 0;
    for ( ;array[i] == other[i] && i < this->size(); i++ );

    if ( array[current] == other[i] && this->size() == other.size() )
    {
        return 1;
    } else {
        return 0;
    }
}

bool List::operator!=(const List& other) const
{
    int i = 0;
    for ( ;array[i] == other[i] && i < this->size(); i++ );

    if ( array[current] == other[i] && this->size() == other.size() )
    {
        return 0;
    } else
    {
        return 1;
    }
}

std::ostream& operator<<(std::ostream& out, const List& list)
{
    int last = list.size() - 1;

    for ( int i = 0; i < last; i++ )
    {
        out << list[i] << ' ';
    }
    out << list[last];
    return out;
}