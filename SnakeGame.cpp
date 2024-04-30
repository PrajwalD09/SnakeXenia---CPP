// #include<iostream>
// #include<conio.h>
// #include<windows.h>
// using namespace std;
// bool gameOver;
// const int width = 40;
// const int height = 40; 
// int x, y, fruitX, fruitY, score;
// int tailX[100], tailY[100];
// int nTail;
// enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
// eDirection dir;

// void setup()
// {
//     gameOver = false;
//     dir = STOP;
//     x = width/2;
//     y = height/2; //for the head to be centered
//     fruitX = rand() % width;
//     fruitY = rand() % height;
//     score = 0;

// }

// void draw()
// {
//     system("cls"); 
//     for(int i=0; i<width+2; i++){
//         cout<<"-";
//     }cout<<endl;
    
//     for(int i=0; i<height; i++)
//     {
//         for(int j=0; j<width+2; j++)
//         {
//             if(j == 0){
//                 cout<<"|";
//             }
//             if(i == y && j == x){
//                 cout<<"O";
//             }
//             else if(i == fruitY && j == fruitX){
//                 cout<<"*";
//             }
//             else{

//                 bool print = false;
//                 for(int k=0; k<nTail; k++){

                    
//                     if(tailX[k] == j && tailY[k] == i){
//                         cout<<"o";
//                         print = true;
//                     }

//                 }
//                 if(!print){
//                         cout<<" ";
//                 }

                
//             }

//             if(j == width -1){
//                 cout<<"|";
//             }
//         }
//         cout<<endl;
//     }


//     for(int i=0; i<width+2; i++){
//         cout<<"-";
//     }cout<<endl;

//     cout<<"Score : "<<score<<endl;


// }

// void input()
// {
//     if(_kbhit()){
//         switch(_getch())
//         {
//             case 'a':
//                 dir = LEFT;
//                 break;
//             case 's':
//                 dir = DOWN;
//                 break;
//             case 'w':
//                 dir = UP;
//                 break;
//             case 'd':
//                 dir = RIGHT;
//                 break;
//             case 'x':
//                 dir = STOP;
//                 break;

//         }
//     }
// }

// void logic()
// {
//     int prevX = tailX[0];
//     int prevY = tailY[0];
//     int prev2X, prev2Y;
//     tailX[0] = x;
//     tailY[0] = y;

//     for(int i=1; i<nTail; i++){
//         prev2X = tailX[i];
//         prev2Y = tailY[i];
//         tailX[i] = prevX;
//         tailY[i] = prevY;
//         prevX = prev2X;
//         prevY = prev2Y;
//     }

//     switch(dir)
//     {
//         case LEFT:
//             x--;
//             break;
//         case DOWN:
//             y++;
//             break;
//         case UP:
//             y--;
//             break;
//         case RIGHT:
//             x++;
//             break;
//         default:
//             break;
//     }

//     if(x > width || x < 0 || y > height || y < 0){
//         gameOver = true;
//     }

//     if(x >= width){
//         x=0;
//     }
//     else if(x <= 0){
//         x=width-1;
//     }

//     if(y >= height){
//         y=0;
//     }
//     else if(y <= 0){
//         y=height-1;
//     }

//     for(int i=0; i<nTail; i++){
//         if(tailX[i] == x && tailY[i] == y){
//             gameOver = true;
//         }
//     }

//     if(x == fruitX && y == fruitY){
//         score += 10;
//         fruitX = rand() % width;
//         fruitY = rand() % height;
//         nTail++;
//     }
// }

// int main(){

//     setup();

//     while(!gameOver){
        
//         draw();
//         input();
//         logic();
//         Sleep(20);

//     }
// }

// #include <iostream>
// #include <conio.h>
// #include <windows.h>
// #include <random>
// #include <chrono>

// using namespace std;

// constexpr int width = 40;
// constexpr int height = 40;

// bool gameOver;
// int x, y, fruitX, fruitY, score;
// int tailX[100], tailY[100];
// int nTail;

// enum class Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
// Direction dir;

// void Setup()
// {
//     gameOver = false;
//     dir = Direction::STOP;
//     x = width / 2;
//     y = height / 2;
//     fruitX = rand() % width;
//     fruitY = rand() % height;
//     score = 0;
// }

// void Draw()
// {
//     system("cls");
    
//     for (int i = 0; i < width + 2; i++)
//         cout << "-";
//     cout << endl;
    
//     for (int i = 0; i < height; i++)
//     {
//         for (int j = 0; j < width + 2; j++)
//         {
//             if (j == 0 || j == width + 1)
//                 cout << "|";
//             else if (i == y && j == x)
//                 cout << "O";
//             else if (i == fruitY && j == fruitX)
//                 cout << "*";
//             else
//             {
//                 bool print = false;
//                 for (int k = 0; k < nTail; k++)
//                 {
//                     if (tailX[k] == j && tailY[k] == i)
//                     {
//                         cout << "o";
//                         print = true;
//                     }
//                 }
//                 if (!print)
//                     cout << " ";
//             }
//         }
//         cout << endl;
//     }
    
//     for (int i = 0; i < width + 2; i++)
//         cout << "-";
//     cout << endl;
    
//     cout << "Score: " << score << endl;
// }

// void Input()
// {
//     if (_kbhit())
//     {
//         switch (_getch())
//         {
//             case 'a':
//                 dir = Direction::LEFT;
//                 break;
//             case 's':
//                 dir = Direction::DOWN;
//                 break;
//             case 'w':
//                 dir = Direction::UP;
//                 break;
//             case 'd':
//                 dir = Direction::RIGHT;
//                 break;
//             case 'x':
//                 dir = Direction::STOP;
//                 break;
//         }
//     }
// }

// void Logic()
// {
//     int prevX = tailX[0];
//     int prevY = tailY[0];
//     int prev2X, prev2Y;
//     tailX[0] = x;
//     tailY[0] = y;

//     for (int i = 1; i < nTail; i++)
//     {
//         prev2X = tailX[i];
//         prev2Y = tailY[i];
//         tailX[i] = prevX;
//         tailY[i] = prevY;
//         prevX = prev2X;
//         prevY = prev2Y;
//     }

//     switch (dir)
//     {
//         case Direction::LEFT:
//             x--;
//             break;
//         case Direction::DOWN:
//             y++;
//             break;
//         case Direction::UP:
//             y--;
//             break;
//         case Direction::RIGHT:
//             x++;
//             break;
//         default:
//             break;
//     }

//     x = (x + width) % width;
//     y = (y + height) % height;

//     for (int i = 0; i < nTail; i++)
//     {
//         if (tailX[i] == x && tailY[i] == y)
//         {
//             gameOver = true;
//             break;
//         }
//     }

//     if (x == fruitX && y == fruitY)
//     {
//         score += 10;
//         fruitX = rand() % width;
//         fruitY = rand() % height;
//         nTail++;
//     }
// }

// int main()
// {
//     Setup();

//     while (!gameOver)
//     {
//         Draw();
//         Input();
//         Logic();
//         Sleep(20);
//     }

//     return 0;
// }


#include <iostream>
#include <conio.h>
#include <windows.h>
#include <random>
#include <chrono>

using namespace std;

constexpr int width = 40;
constexpr int height = 40;

bool gameOver;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;

enum class Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
Direction dir;

void Setup()
{
    gameOver = false;
    dir = Direction::STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}

void Draw()
{
    COORD cursorPosition;
    cursorPosition.X = 0;
    cursorPosition.Y = 0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPosition);
    
    for (int i = 0; i < width + 2; i++)
        cout << "-";
    cout << endl;
    
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width + 2; j++)
        {
            if (j == 0 || j == width + 1)
                cout << "|";
            else if (i == y && j == x)
                cout << "O";
            else if (i == fruitY && j == fruitX)
                cout << "*";
            else
            {
                bool print = false;
                for (int k = 0; k < nTail; k++)
                {
                    if (tailX[k] == j && tailY[k] == i)
                    {
                        cout << "o";
                        print = true;
                    }
                }
                if (!print)
                    cout << " ";
            }
        }
        cout << endl;
    }
    
    for (int i = 0; i < width + 2; i++)
        cout << "-";
    cout << endl;
    
    cout << "Score: " << score << endl;
}

void Input()
{
    if (_kbhit())
    {
        switch (_getch())
        {
            case 'a':
                dir = Direction::LEFT;
                break;
            case 's':
                dir = Direction::DOWN;
                break;
            case 'w':
                dir = Direction::UP;
                break;
            case 'd':
                dir = Direction::RIGHT;
                break;
            case 'x':
                dir = Direction::STOP;
                break;
        }
    }
}

void Logic()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < nTail; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir)
    {
        case Direction::LEFT:
            x--;
            break;
        case Direction::DOWN:
            y++;
            break;
        case Direction::UP:
            y--;
            break;
        case Direction::RIGHT:
            x++;
            break;
        default:
            break;
    }

    x = (x + width) % width;
    y = (y + height) % height;

    for (int i = 0; i < nTail; i++)
    {
        if (tailX[i] == x && tailY[i] == y)
        {
            gameOver = true;
            break;
        }
    }

    if (x == fruitX && y == fruitY)
    {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        nTail++;
    }
}

int main()
{
    Setup();

    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
        Sleep(20);
    }

    return 0;
}

// This version uses SetConsoleCursorPosition to move the cursor back to the top-left corner of the console window, 
// effectively preventing flickering. 
// Additionally, the Sleep interval has been adjusted to make the game run smoother.

// #include <iostream>
// #include <conio.h>
// #include <windows.h>
// #include <random>
// #include <chrono>

// using namespace std;

// constexpr int width = 40;
// constexpr int height = 40;

// struct Position {
//     int x, y;
// };

// bool gameOver;
// Position head, fruit;
// int score;
// Position tail[100];
// int nTail;

// enum class Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
// Direction dir;

// void Setup() {
//     gameOver = false;
//     dir = Direction::STOP;
//     head = {width / 2, height / 2};
//     fruit = {rand() % width, rand() % height};
//     score = 0;
// }

// void Draw() {
//     system("cls");
//     for (int i = 0; i < width + 2; i++) cout << "-";
//     cout << endl;
    
//     for (int i = 0; i < height; i++) {
//         for (int j = 0; j < width + 2; j++) {
//             if (j == 0 || j == width + 1) cout << "|";
//             else if (i == head.y && j == head.x) cout << "O";
//             else if (i == fruit.y && j == fruit.x) cout << "*";
//             else {
//                 bool print = false;
//                 for (int k = 0; k < nTail; k++) {
//                     if (tail[k].x == j && tail[k].y == i) {
//                         cout << "o";
//                         print = true;
//                     }
//                 }
//                 if (!print) cout << " ";
//             }
//         }
//         cout << endl;
//     }
    
//     for (int i = 0; i < width + 2; i++) cout << "-";
//     cout << endl;
    
//     cout << "Score: " << score << endl;
// }

// void Input() {
//     if (_kbhit()) {
//         switch (_getch()) {
//             case 'a': dir = Direction::LEFT; break;
//             case 's': dir = Direction::DOWN; break;
//             case 'w': dir = Direction::UP; break;
//             case 'd': dir = Direction::RIGHT; break;
//             case 'x': dir = Direction::STOP; break;
//         }
//     }
// }

// void Logic() {
//     Position prevTail = tail[0];
//     tail[0] = head;

//     for (int i = 1; i < nTail; i++) {
//         swap(tail[i], prevTail);
//     }

//     switch (dir) {
//         case Direction::LEFT: head.x--; break;
//         case Direction::DOWN: head.y++; break;
//         case Direction::UP: head.y--; break;
//         case Direction::RIGHT: head.x++; break;
//         default: break;
//     }

//     head.x = (head.x + width) % width;
//     head.y = (head.y + height) % height;

//     for (int i = 0; i < nTail; i++) {
//         if (tail[i].x == head.x && tail[i].y == head.y) {
//             gameOver = true;
//             break;
//         }
//     }

//     if (head.x == fruit.x && head.y == fruit.y) {
//         score += 10;
//         fruit = {rand() % width, rand() % height};
//         nTail++;
//     }
// }

// int main() {
//     Setup();

//     while (!gameOver) {
//         Draw();
//         Input();
//         Logic();
//         Sleep(100);
//     }

//     return 0;
// }


// Certainly, let's break down the code step by step:

// 1. **Header Files**: The code begins by including necessary header files, such as 
// `<iostream>`, `<conio.h>`, `<windows.h>`, and others. These headers provide functions 
// for console I/O, keyboard input, and Windows-specific functionality.

// 2. **Constants and Structs**:
//    - `constexpr int width = 40;` and `constexpr int height = 40;`: These constants
//     define  the dimensions of the console grid.
//    - `struct Position { int x, y; };`: This struct is used to represent positions with x 
//    and y coordinates, which makes it easier to manage positions in the game.

// 3. **Global Variables**:
//    - `bool gameOver;`: This variable keeps track of whether the game is over or not.
//    - `Position head, fruit;`: These variables hold the positions of the snake's head
//     and the fruit.
//    - `int score;`: The player's score.
//    - `Position tail[100];`: An array to store the positions of the snake's tail.
//    - `int nTail;`: The length of the snake's tail.
//    - `enum class Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };`: An enumeration
//     representing the directions the snake can move.

// 4. **Setup Function**:
//    - `void Setup()`: Initializes the game variables at the start of the game. 
//    Sets the initial state of the snake, fruit, score, and game over status.

// 5. **Draw Function**:
//    - `void Draw()`: Draws the game grid, snake, and fruit on the console.
//      - It uses `system("cls")` to clear the console screen.
//      - It loops through the grid and prints characters to represent
//       the walls, snake, and fruit.
//      - The loop also checks the snake's tail to print the tail segments.
//      - The score is displayed at the bottom.

// 6. **Input Function**:
//    - `void Input()`: Handles keyboard input to control the snake's direction.
//      - It checks if a key is pressed using `_kbhit()`.
//      - If a key is pressed, it updates the `dir` variable
//       to the corresponding direction.

// 7. **Logic Function**:
//    - `void Logic()`: Handles the game logic including movement,
//     collision detection, and updating the score.
//      - It updates the positions of the snake's tail segments.
//      - The `switch` statement updates the head's position based on the
//       current direction.
//      - The head's position is wrapped around the grid to allow movement 
//      across the screen edges.
//      - It checks for collisions with the snake's tail and with the fruit to
//       update the game status and score.

// 8. **Main Function**:
//    - `int main()`: The entry point of the program.
//      - Calls `Setup()` to initialize the game.
//      - Enters a loop where it repeatedly calls `Draw()`, `Input()`,
//       and `Logic()` to update and display the game state.
//      - Uses `Sleep(100)` to introduce a delay between frames 
//      to control the game speed.

// This code implements a basic snake game where the player controls
//  a snake to eat fruits while avoiding collisions with the walls
//   and its own tail. The game loop repeatedly updates and displays 
//   the game state until the player wins or loses.



// Sure, let's go through the code step by step and understand what each part does:

// 1. **Header Files**:
//    ```cpp
//    #include <iostream>
//    #include <conio.h>
//    #include <windows.h>
//    #include <random>
//    #include <chrono>
//    ```
//    These are the necessary header files that provide functions for console
//     I/O (`iostream`), keyboard input (`conio.h`), Windows-specific 
//     functionality (`windows.h`), and random number generation (`random` and `chrono`).

// 2. **Constants and Structs**:
//    ```cpp
//    constexpr int width = 40;
//    constexpr int height = 40;

//    struct Position {
//        int x, y;
//    };
//    ```
//    Here, `width` and `height` define the dimensions of the game grid
//    . `Position` is a structure to represent the x and y coordinates of a point.

// 3. **Global Variables**:
//    ```cpp
//    bool gameOver;
//    Position head, fruit;
//    int score;
//    Position tail[100];
//    int nTail;
//    enum class Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
//    Direction dir;
//    ```
//    - `gameOver` is a flag to determine if the game is over.
//    - `head` and `fruit` are positions representing the snake's head and the fruit.
//    - `score` holds the player's score.
//    - `tail` is an array of positions to store the segments of the snake's tail.
//    - `nTail` is the length of the snake's tail.
//    - `Direction` is an enumeration to represent the directions the snake can move.

// 4. **Setup Function** (`void Setup()`):
//    - Initializes the game variables at the start of the game.
//    - Sets `gameOver` to `false`.
//    - Sets the initial direction of the snake (`dir`) to `Direction::STOP`.
//    - Initializes the `head` at the center of the grid.
//    - Randomly positions the `fruit` within the grid.
//    - Initializes the `score` to 0.

// 5. **Draw Function** (`void Draw()`):
//    - Clears the console using `system("cls")`.
//    - Draws the game grid, snake, and fruit on the console.
//    - Loops through the grid and prints characters based on the
//     positions of the head, fruit, and tail.
//    - Displays the player's score.

// 6. **Input Function** (`void Input()`):
//    - Handles keyboard input to control the snake's direction.
//    - Checks if a key is pressed using `_kbhit()`.
//    - If a key is pressed, updates the `dir` variable based on the pressed key.

// 7. **Logic Function** (`void Logic()`):
//    - Manages the game logic.
//    - Updates the positions of the snake's tail segments.
//    - Updates the position of the snake's head based on the current direction.
//    - Wraps the head's position to allow movement across the screen edges.
//    - Checks for collisions with the snake's tail and with the fruit.
//    - Updates the game state and score accordingly.

// 8. **Main Function** (`int main()`):
//    - Entry point of the program.
//    - Calls the `Setup()` function to initialize the game.
//    - Enters a game loop that repeatedly calls `Draw()`, `Input()`
//    , and `Logic()` to update and display the game.
//    - Introduces a delay between frames using `Sleep(100)` to control the game speed.

// This code implements a basic snake game where the player controls
//  a snake to eat fruits while avoiding collisions with walls and its 
//  own tail. The code structure separates different aspects of the game
//   logic for better organization and readability.