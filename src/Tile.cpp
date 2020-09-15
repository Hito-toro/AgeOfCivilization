/*
** EPITECH PROJECT, 2020
** AgeOfCivilization
** File description:
** Tile
*/

#include "Tile.hpp"

Tile::Tile(int _x, int _y) {
    this->position.x = _x;
    this->position.y = _y;
    this->visible = false;

    this->block = new Block();

    this->floor = new Floor();
}

Tile::Tile(int _x, int _y, Block& _block)
{
    this->position.x = _x;
    this->position.y = _y;
    this->visible = false;

    this->block = &_block;

    this->floor = new Floor();
}

Tile::Tile(int _x, int _y, Block& _block, Floor& _floor)
{
    this->position.x = _x;
    this->position.y = _y;
    this->visible = false;
    
    this->block = &_block;

    this->floor = &_floor;
}

Tile::~Tile()
{
}

/*

**  SETTERS & GETTERS

*/

PositionStruct Tile::getPosition() const
{
    return this->position;
}

Floor *Tile::getFloor() const
{
    return this->floor;
}

void Tile::setFloor(Floor& _floor)
{
    this->floor = &_floor;
}

Block *Tile::getBlock() const
{
    return this->block;
}

void Tile::setBlock(Block& _block)
{
    this->block = &_block;
}

bool Tile::isVisible() const
{
    return this->visible;
}

void Tile::explore()
{
    this->visible = true;
}