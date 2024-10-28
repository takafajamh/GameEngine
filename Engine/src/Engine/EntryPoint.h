#pragma once
#include <functional>


extern sk::Application* sk::CreateApplication();

#ifdef __EMSCRIPTEN__
    static std::function<void()> boundRun;
#endif 
int main(int argc, char** argv) {
    sk::Application*  app = sk::CreateApplication(); // Initialize the global app instance

    #ifdef __EMSCRIPTEN__
        boundRun = std::bind(&sk::Application::Run, app);

        emscripten_set_main_loop([]() {
            boundRun(); 
            }, 60, 1);

    #else
        app->Run(); 
        delete app; 
    #endif 

    return 0; 
}
