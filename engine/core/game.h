#pragma once

#include "boardstate.h"
#include "gameresult.h"
#include "turn.h"
#include "roll.h"

#include <vector>
#include <optional>

class Game
{
public:
    virtual ~Game() = 0;
    virtual std::vector<Turn> generateLegalTurns() = 0;
    void playTurn(Turn turn);
    std::optional<GameResult> getResult() const;
    virtual bool isFinished(PlayerColor player) const = 0;

    const Roll& currentRoll() const;

protected:
    Game();
    bool isBlot(const Point& point, PlayerColor player) const;
    bool isBlocked(const Point& point, PlayerColor player) const;
    bool isBearingOff(PlayerColor player) const;

    BoardState m_board;
    Roll m_currentRoll;
    std::vector<Turn> m_history;
    std::optional<GameResult> m_result;

    Die m_firstDie {};
    Die m_secondDie {};

// private:
//     const int CHECKERS_COUNT;
};
