#include <stdio.h>

enum EventType { t_keyboard, t_mouse };

struct Keyboard { char key; };
struct Mouse { int x,y; };

union EventUnion{
	struct Keyboard keyboard;
	struct Mouse mouse;
};

struct Event {
	enum EventType type;
	union EventUnion structure;
};

void event_print(struct Event event){
	printf("event type: %d\n", event.type);
	switch(event.type){
		
		case t_keyboard:
			printf("key: %c\n", event.structure.keyboard.key);
			break;
		
		case t_mouse:
			printf("x: %d, y: %d\n", event.structure.mouse.x, event.structure.mouse.y);
			break;
	}
}

int main(){
	struct Event event1;
	
	event1.type = t_keyboard;
	event1.structure.keyboard.key = 'q';
	
	event_print(event1);
	
	event1.type = t_mouse;
	event1.structure.mouse.x = 11;
	event1.structure.mouse.y = 22;
	
	event_print(event1);
	
	return 0;
}
