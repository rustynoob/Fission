#ifndef INPUTSYSTEM_H
#define INPUTSYSTEM_H

#include <SFML/Window/Window.hpp>

#include "Core/System.h"

class InputSystem : public System
{
    public:
        InputSystem(EventManager *eventManager, sf::Window *window);
        virtual ~InputSystem();

    protected:
        void begin(const float dt);

        void processEntity(Entity* entity, const float dt);

        void end(const float dt);

    private:
        sf::Window *mWindow;
};

#endif // INPUTSYSTEM_H
