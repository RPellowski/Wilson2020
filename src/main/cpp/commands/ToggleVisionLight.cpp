/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/ToggleVisionLight.h"

ToggleVisionLight::ToggleVisionLight(Vision *vision) : m_vision(vision) {
  // Use addRequirements() here to declare subsystem dependencies.
  AddRequirements(vision);
}

// Called when the command is initially scheduled.
void ToggleVisionLight::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void ToggleVisionLight::Execute() {}

// Called once the command ends or is interrupted.
void ToggleVisionLight::End(bool interrupted) {}

// Returns true when the command should end.
bool ToggleVisionLight::IsFinished() { return false; }