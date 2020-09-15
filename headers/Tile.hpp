/*
** PROJECT, 2020
** AgeOfCivilization
** File description:
** Tile
*/

#ifndef TILE_HPP_
#define TILE_HPP_

#include "my.hpp"

class Tile {
    public:
        Tile(int x, int y);
        Tile(int x, int y, Block& _block);
        Tile(int x, int y, Block& _block, Floor& _floor);
        ~Tile();

        PositionStruct getPosition() const;
        Floor *getFloor() const;
        void setFloor(Floor& _floor);
        Block *getBlock() const;
        void setBlock(Block& _block);
        bool isVisible() const;
        void explore();

        // void isWalkable() const;

    protected:
    private:
        PositionStruct position;
        Block* block;
        Floor* floor;
        bool visible;
};

#endif /* !TILE_HPP_ */
