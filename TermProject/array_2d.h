//
// Created by jongkukpark on 19. 12. 16..
//

#ifndef TERMPROJECT_ARRAY_2D_H
#define TERMPROJECT_ARRAY_2D_H

#include <set>
#include <vector>
#include "block.h"

class array_2d {
private:
    int width;
    int height;
    block* block_array[5][12];
    std::set<color_block*> explosion_s;
    int score;

public:
    array_2d();
    bool can_make(int type);
    void delete_block(int x, int y);
    void insert(std::vector<block*> v);
    void insert(int x, int y, block* b);
    block* get_block(int x, int y);
    bool can_move(int x, int y);
    void print();
    void insert_explosion(color_block * group);
    void remove_explosion(color_block* group);
    bool can_explosion();
    void explosion();
    int get_score();
    void make_new_block();
};


#endif //TERMPROJECT_ARRAY_2D_H
