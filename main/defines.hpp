#ifndef _QUANTA_CHESS_DEFINES_H_
#define _QUANTA_CHESS_DEFINES_H_

#include <cstdint>
#include <string>

namespace quanta {
constexpr size_t COMMAND_BUFFER_LEN = 256;

constexpr char prog_version[] = "quanta, 0.0.1";

typedef uint64_t BitMap;

}  // namespace quanta

#endif