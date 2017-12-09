#ifndef PRANK_BOOK_THROW_HPP
#define PRANK_BOOK_THROW_HPP

#include "../Prank.hpp"

class PrankBookThrow: public Prank{
public:
    PrankBookThrow(std::map<std::string, Item*>* its, int xPosition);
    bool isAvailable() override;
};

#endif // PRANK_BOOK_THROW_HPP
