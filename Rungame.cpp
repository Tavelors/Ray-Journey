#include "Rungame.h"

Rungame::Rungame() {


}

void Rungame::run() {

    Player player;
    if (createPlayer) {
        player.createPlayer(30, 30, 270, 270);
        createPlayer = false;
    }
    Rectangle mapBorders[76];
    bool spawn = false;
    int pos_x_border = 0;
    int pos_y_border = 0;
    for (int i=0; i<18; i++) {
        Rectangle borderRec;
        borderRec.height = 30;
        borderRec.width = 30;
        borderRec.x = pos_x_border;
        borderRec.y = pos_y_border;
        mapBorders[i] = borderRec;
        pos_x_border += 30;
    }
    for (int i=19; i<37; i++) {
        Rectangle borderRec;
        borderRec.height = 30;
        borderRec.width = 30;
        borderRec.x = pos_x_border;
        borderRec.y = pos_y_border;
        mapBorders[i] = borderRec;
        pos_y_border += 30;
    }
    for (int i=38; i<56; i++) {
        Rectangle borderRec;
        borderRec.height = 30;
        borderRec.width = 30;
        borderRec.x = pos_x_border;
        borderRec.y = pos_y_border;
        mapBorders[i] = borderRec;
        pos_x_border -= 30;
    }
    for (int i=57; i<76; i++) {
        Rectangle borderRec;
        borderRec.height = 30;
        borderRec.width = 30;
        borderRec.x = pos_x_border;
        borderRec.y = pos_y_border;
        mapBorders[i] = borderRec;
        pos_y_border -= 30;
    }



    BeginDrawing();

            ClearBackground(RAYWHITE);
            // borders
            for (int i=0; i<76; i++) {
                if ((i > 7 && i < 11) || (i > 26 && i < 30) || (i > 45 && i < 49) || (i > 64 && i < 68)) {
                    DrawRectangleRec(mapBorders[i], BLUE);
                } else {
                    DrawRectangleRec(mapBorders[i], BLACK);
                }
            }

            DrawRectangleRec(player.getPlayerPos(), GREEN);
                
            

            // std::cout << "x - " << player.getPlayerPos().x << " y - " << player.getPlayerPos().y << std::endl;

            if (player.getPlayerPos().y > 30) if(IsKeyDown(KEY_W)) player.movePlayer(0.0, -0.05);
            if (player.getPlayerPos().y < 510) if(IsKeyDown(KEY_S)) player.movePlayer(0.0, 0.05);
            if (player.getPlayerPos().x > 30) if(IsKeyDown(KEY_A)) player.movePlayer(-0.05, 0.0);
            if (player.getPlayerPos().x < 510) if(IsKeyDown(KEY_D)) player.movePlayer(0.05, 0.0);

            
    EndDrawing();


}