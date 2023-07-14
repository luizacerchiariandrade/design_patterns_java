/*
 * button.cpp
 *
 *  Created on: Nov 16, 2017
 *      Author: ramiz
 */

#include "button.h"

Button::Button(ICommand* command) {
  this->command_ = command;
}

Button::~Button() {

}

void Button::Press() {
  this->command_->Execute();
}

void Button::SetCommand(ICommand * command) {
  this->command_ = command;
}

ICommand* Button::GetCommand() {
  return this->command_;
}

