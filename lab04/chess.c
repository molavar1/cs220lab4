#include <stdint.h>
#include <stdio.h>
#include "chess.h"

unit64_t king_pos = 0; 

int main(){
	chars[128];
	uint8_t index;
	unsigned int error;
	Move m = {INVALID_INDEX, INVALID_INDEX};

	printf("Enter intial king position: ");
	fgets(s, 127, stdin); // this might have to be a bracket instead of paranthesis
	index = notation_to_idx(s[0], s[1]);
	if(index == INVALID_INDEX){
		printf("error");
		break;
	}
	SET_BIT(kibg_pos, index);

	display_board();

	for(; ;) {
		m = get_move();

		if(make_move(m) != 1) { 
			printf("Invlaid move. Try again!\n");
		}else{
			display_board();
		}
	}
	return 0;
}


