#ifndef _QUANTA_CHESS_BOARD_H_
#define _QUANTA_CHESS_BOARD_H_

#include "defines.hpp"

namespace quanta {

enum NextMove { WHITE_MOVE = 0, BLACK_MOVE = 1 };
enum CanCastle { NO_CASTLE = 0, CAN_CASTLE_OO = 1, CAN_CASTLE_OOO = 2, CAN_CASTLE_ANY = 3 };
enum ViewOrientation { WHITE_POV = 0, BLACK_POV = 1 };

class Board {
 public:
  BitMap white_king;
  BitMap black_king;

  BitMap white_queen;
  BitMap black_queen;

  BitMap white_rooks;
  BitMap black_rooks;

  BitMap white_knights;
  BitMap black_knights;

  BitMap white_bishops;
  BitMap black_bishops;

  BitMap white_pawns;
  BitMap black_pawns;

  BitMap white_pieces;
  BitMap black_pieces;
  BitMap occupied_squares;

  NextMove next_move;

  CanCastle white_castle;
  CanCastle black_castle;

  int ep_square;
  int fifty_move;
  int material;

  int square[64];

  ViewOrientation view_orientation;

  void init();
  void init_from_squares(int input[64], NextMove next_move, int fifty_move, CanCastle whitle, CanCastle black,
                         int ep_square);
  // void init_from_fen();

  void display();
};
}  // namespace quanta

#endif