//
// Created by jongkukpark on 19. 12. 16..
//

#include "array_2d.h"
#include <iostream>

array_2d::array_2d() {
    this->width = 5;
    this->height = 12;
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            block_array[j][i] = new block(0);
        }
    }
}

void array_2d::print() {
    std::cout << "score: " << this->get_score() << std::endl;
    for (int i = 0; i < this->height; i++)
    {
        for (int j = 0; j < this->width; j++)
        {
            std::cout << block_array[j][i]->get_color() << "\t";
        }
        std::cout << std::endl;
    }
}

int array_2d::get_score() {
    return this->score;
}

void array_2d::make_new_block() {
    int make_x = 2;
    int make_y = 1;
}

void array_2d::insert(int x, int y, block *b) {

}