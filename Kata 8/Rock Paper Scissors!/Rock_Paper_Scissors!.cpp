// Let's play! You have to return which player won! In case of a draw return Draw!.

#include <string>

std::string rps(const std::string& p1, const std::string& p2) {
    if (p1 == "scissors") {
        if (p2 == "paper") { return "Player 1 won!"; }
        else if (p2 == "rock") { return "Player 2 won!"; }
        else if (p2 == "scissors") { return "Draw!"; }
    }
    else if (p1 == "paper") {
        if (p2 == "scissors") { return "Player 2 won!"; }
        else if (p2 == "rock") { return "Player 1 won!"; }
        else if (p2 == "paper") { return "Draw!"; }
    }
    else if (p1 == "rock") {
        if (p2 == "scissors") { return "Player 1 won!"; }
        if (p2 == "paper") { return "Player 2 won!"; }
        if (p2 == "rock") { return "Draw!"; }
    }
    return "Error!";
}