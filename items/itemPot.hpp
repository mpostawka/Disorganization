#ifndef ITEM_POT_HPP
#define ITEM_POT_HPP

#include "../item.hpp"

#include <iostream>

class ItemPot: public Item{
public:
    ItemPot(Anim* a, float layer=0.0)
    :Item(a, BOOK, layer)
    {
    }

    void onClick() override {
        std::cout << "pot clicked\n";
    }

    void onDrop() override {
        std::cout << "pot has been planted\n";
    }

    void changeState() override {
		if (state == DEFAULT){
			state = BROKEN;
            setColor(sf::Color::Red);
		}
		else if (state == BROKEN){
            state = DEFAULT;
            setColor(sf::Color::White);
		}
    }
};

#endif // ITEM_POT_HPP
