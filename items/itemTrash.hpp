#ifndef ITEMTRASH_H
#define ITEMTRASH_H

#include "../item.hpp"
#include <stack>

class ItemTrash : public Item {
public:
    ItemTrash(Anim *a, float _layer = 3.0f);

    void onClick() override;
    void onRightClick() override;
    void insert(Item* item);

    std::stack<Item*> myItems;
};

#endif // ITEMTRASH_H
