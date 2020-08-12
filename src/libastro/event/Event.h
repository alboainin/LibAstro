#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <thread>
#include <unordered_map>
#include <functional>

#include <sys/ioctl.h>
#include <termios.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

namespace astro {
    
    enum class EventType {
        WindowClose,
        WindowResize,
        KeyPressed
    };

    struct EventListenerHandle
    {
        unsigned int id;
    };

    template<typename T>
    class EventChannel
    {
        public:
            using idType = unsigned int;

            static EventListenerHandle registerListener(std::function<bool(const T&)> listener)
            {
                auto id = getNextId();
                getHandlers()[id] = listener;
                return EventListenerHandle{id};
            }

            static void removeListener(EventListenerHandle handle)
            {
                getHandlers().erase(handle.id);
            }

            static void triggerEvent(T e)
            {
                for (const auto& h : getHandlers())
                {
                    h.second(e);
                }
            }

        private:
            static idType getNextId()
            {
                static idType id = 0;
                return id++;
            }

            static std::unordered_map<idType, std::function<bool(const T&)>>& getHandlers()
            {
                static std::unordered_map<idType, std::function<bool(const T&)>> handlers;
                return handlers;
            }

            template<typename T>
            class EventChannel<T*>{};
            
        
            template<typename T>
            class EventChannel<T&>{};
        
            template<typename T>
            class EventChannel<const T>{};
            
            template<typename T>
            void dispatchEvent<const T& t>
            {
                EventChannel<T>::triggerEvent(t);
            };
            
            template<typename T>
            void EventChannel<T* t>
            {
                dispatchEvent(*t):
            };

    };

}
