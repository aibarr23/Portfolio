#ifndef IntCell_H
#define IntCell_H

/**
 * A class for simulating an intege memory cell
 * A complete declaration of an IntCell class
*/
class IntCell
{
    public:
        /**
         * Construct the IntCell.
         * Initial value is 0.
         */
        IntCell()
        { storedValue = 0; }

        /**
         * Construct the IntCell
         * Initial value is initialValue.
         */
        IntCell(int initialValue)
        { storedValue = initialValue;}

        //
        // The use of braces instead of parentheses is new in C++11 and is part of a larger effort
        // to provide a uniform syntax for initialization everywhere
        //
        explicit IntCell(int initialValue = 0)
            : storedValue{ initialValue}{}
        int read() const
        { return storedValue;}
        

        /**
         * Return the stored value
         */
        int read()
        { return storedValue;}

        /**
         * Change the stored value to x
         */
        void write( int x)
        { storedValue = x;}
    private:
        int storedValue;
};

#endif