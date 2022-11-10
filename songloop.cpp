#include <SFML/Audio.hpp>
#include <cstdio>
#include <iostream>
#include <chrono>

int main()
{

    auto start_time = std::chrono::high_resolution_clock::now ();

    sf::SoundBuffer buffer;
    if (!buffer.loadFromFile("tertis.wav")){
        return -1;
    }
    sf::Sound sound;
    sound.setBuffer(buffer);
    sound.play();
    // sound.setLoop(true);

    while (true){

        auto current_time = std::chrono::high_resolution_clock::now ();
        auto delta_time = current_time - start_time;
        auto delta_time_microsec
            = std::chrono::duration_cast<std::chrono::microseconds> (delta_time);
        auto delta_time_seconds
            =  0.000001f * static_cast<int> ( delta_time_microsec.count ());
        // std::cout << delta_time_seconds;

        auto time_limit{16};     // song length
        

        if (delta_time_seconds > time_limit){
            start_time = std::chrono::high_resolution_clock::now ();
            sound.play();
            // delta_time_seconds -= time_limit;
        }

    }

}



