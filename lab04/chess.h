

#define INVALID_INDEX 0xFF
#define NORTH_OF(i) (((i) > 63) || ((i) < 8))? INVALID_INDEX : ((i) - 8)
#define SOUTH_OF(i) (((i) > 63) || ((i) < 8))? INVALID_INDEX : ((i) + 8)
#define EAST_OF(i)
#define WEST_OF(i)
#define SE_OF(i) SOUTH_OF(EAST_OF(i))
#define SW_OF(i) SOUTH_OF(WEST_OF(i))
#define NE_OF(i) NORTH_OF(EAST_OF(i))
#define NW_OF(i) NORTH_OF(WEST_OF(i))
#define SETBIT(k, i) ((k) = (k) | (1UL << (i)))
#define CLEARBIT(k, i) ((k) = (k) & ˜ (1UL << (i)))
#define ISSET (k, i) ((k) & (1UL << (i))

struct _move  {
	uint8_t from;
	uint8_t to;
};
typedef struct _move Move;

unsigned int make_move (Move m){
}



