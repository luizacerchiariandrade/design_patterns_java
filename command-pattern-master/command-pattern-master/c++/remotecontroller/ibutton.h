/*
 * IButton.h
 *
 *  Created on: Nov 16, 2017
 *      Author: ramiz
 */

#ifndef IBUTTON_H_
#define IBUTTON_H_

#include "commands/icommand.h"

class IButton {
public:
  virtual void Press() = 0;
  virtual void SetCommand(ICommand * command) = 0;
  virtual ICommand* GetCommand() = 0;

  virtual ~IButton() {}
};



#endif /* IBUTTON_H_ */
