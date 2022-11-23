// https://stackoverflow.com/a/35922854/10171720
/*
https://stackoverflow.com/questions/35922385/sdl-events-and-event-queues
It uses a trick where all members of the SDL_Event union
also have a member Uint8 type; as the first member, which is identical to Uint8 type;.
This works because there is no padding before them and they all share the same bytes and the same address:
*/

#include <stdio.h>

enum EventType { t_keyboard, t_mouse };

struct Keyboard { enum EventType type; char key; };
struct Mouse { enum EventType type; int x,y; };

union EventUnion{
	enum EventType type; // trick here, necessary
	
	struct Keyboard keyboard;
	struct Mouse mouse;
};

void u_event_print(union EventUnion u_event){
	printf("event type: %d\n", u_event.type);
	switch(u_event.type){
		
		case t_keyboard:
			printf("key: %c\n", u_event.keyboard.key);
			break;
		
		case t_mouse:
			printf("x: %d, y: %d\n", u_event.mouse.x, u_event.mouse.y);
			break;
	}
}

int main(){
	//---------------------------------
	
	union EventUnion u_event1;
	
	struct Keyboard keyboard1;
	keyboard1.type = t_keyboard;
	keyboard1.key = 'q';
	
	u_event1.keyboard = keyboard1;
	//u_event1.type = keyboard1.type;
	
	u_event_print(u_event1);
	
	//---------------------------------
	
	union EventUnion u_event2;
	
	struct Mouse mouse1;
	mouse1.type = t_mouse;
	mouse1.x = 11;
	mouse1.y = 22;
	
	u_event2.mouse = mouse1;
	//u_event2.type = mouse1.type;
	
	u_event_print(u_event2);	
	
	//---------------------------------
	
	return 0;
}
