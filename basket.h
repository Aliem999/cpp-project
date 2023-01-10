#ifndef BASKET_H
#define BASKET_H

class basket
{
public:
    basket() // default constructor
    {
    }
    
    basket(int num, int existence_snake) // constructor 
    {
        number = num;
        snake = existence_snake;
    }

    int get_snake() // barai bargardandan vojod maar
    {
        return snake;
    }

private:
    int snake;  // dar sorat vojod maar 1 mishe va da sorat adam vojod 0 mishe
    int number; // shomarie sabad ra neghah midarad
};

#endif
