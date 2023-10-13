
class Player {

public:
    int x, y;
    int speed;

    void Move(int xA, int yA) {
        x += xA * speed;
        y += yA * speed;
    }
};

Player createPlayer() {
    Player player;
    player.x = 5;

    player.Move(1, -1);
}