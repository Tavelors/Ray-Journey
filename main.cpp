
#include "main.h"

bool gameStart = true;


int main(void)
{
    InitWindow(570, 570, "Window");
    // Player player;
    Rungame zone_one;

    
    

    while (!WindowShouldClose())
    {
        zone_one.run();
    }

    CloseWindow();

    return 0;
}

