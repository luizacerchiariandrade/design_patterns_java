/*
 * ICommand.h
 *
 *  Created on: Nov 15, 2017
 *      Author: ramiz
 */

#ifndef ICOMMAND_H_
#define ICOMMAND_H_

class ICommand {
public:
  virtual void Execute() = 0;
  virtual ~ICommand() {}
};


#endif /* ICOMMAND_H_ */
