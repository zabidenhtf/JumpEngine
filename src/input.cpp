/*              JUMP ENGINE              */
/*---------------------------------------*/
/* Copyright (C) 2025-2026 Mykyta Polishyk */
/* This project is licensed under the MIT License. */
/* See the LICENSE file for details. */

#include "input.hpp"
#include "system.hpp"
#include "graphics.hpp"

//#include <iostream>

vector<int> KeyBuffer;

void Input::Callback(GLFWwindow* window, int key, int scancode, int action, int mods){
    if (action == GLFW_PRESS) {
        //cout << "Pressed:" << key << "\n";
        KeyBuffer.push_back(key);
    }
}

void Input::Init(){
    Console.WriteDebug("INPUT", "Input initialisated");
    glfwSetKeyCallback(Graphics->GetWindow(), Callback);
}

bool Input::ButtonPressed(int key){
    if (!KeyBuffer.empty()){
        if (KeyBuffer.back() == key){
            return true;
        }
    }
    return false;
}
int Input::LastButtonPressed(){
    if (!KeyBuffer.empty()){
        return KeyBuffer.back();
    }
    else{
        return -1;
    }
}

void Input::Clear(){
    KeyBuffer.clear();
}
