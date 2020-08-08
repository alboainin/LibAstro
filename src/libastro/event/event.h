

namespace astro {
    namespace Event {
        namespace Keyboard {

            enum Keys { 
                ARROW_UP    = 65,
                ARROW_DOWN  = 66,
                ARROW_RIGHT = 67,
                ARROW_LEFT  = 68,
                ENTER =  10,
                SPACE = 32
            };

            void captureInput(bool KeyVal);
            void resetInput();
        }
    }
}
