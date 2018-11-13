#include <cmsis_os.h>
#include "stdio.h"
#include "uart.h"
#include "GLCD.h"

// 3 tasks:  I/O, Update display, Game logic
// use mutex to control updating of positions. Mutex is between game logic thread and display thread -> add this later

void input(void const *arg) {
	
}

void updateDisplay(void const *arg) {
	
}

void gameLogic(void const *arg) {
	
}


osThreadDef(input, osPriorityNormal, 1, 0);
osThreadDef(updateDisplay, osPriorityNormal, 1, 0);
osThreadDef(gameLogic, osPriorityNormal, 1, 0);


int main( void ) {
	// D D D DDD DDDDONG INVADERRR
	osKernelInitialize();
	osKernelStart();
	
	osThreadCreate(osThread(input), NULL);
	osThreadCreate(osThread(updateDisplay), NULL);
	osThreadCreate(osThread(gameLogic), NULL);

	
}