/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/SpinUpCloseShooter.h"

SpinUpCloseShooter::SpinUpCloseShooter(Shooter *shooter) : m_shooter(shooter) {
  // Use addRequirements() here to declare subsystem dependencies.
  AddRequirements(shooter);
}

// Called when the command is initially scheduled.
void SpinUpCloseShooter::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void SpinUpCloseShooter::Execute() {}

// Called once the command ends or is interrupted.
void SpinUpCloseShooter::End(bool interrupted) {}

// Returns true when the command should end.
bool SpinUpCloseShooter::IsFinished() { return false; }