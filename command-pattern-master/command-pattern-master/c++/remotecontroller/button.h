/*
 * button.h
 *
 *  Created on: Nov 16, 2017
 *      Author: ramiz
 */

#ifndef BUTTON_H_
#define BUTTON_H_

#include "commands/icommand.h"
#include "ibutton.h"

class Button : public IButton {
public:
  Button(ICommand* command);
  virtual ~Button();
  virtual void Press() override;
  virtual void SetCommand(ICommand * command) override;
  virtual ICommand* GetCommand() override;

private:
  ICommand * command_;
};

#endif /* BUTTON_H_ */
