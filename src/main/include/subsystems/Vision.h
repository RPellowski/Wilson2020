/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include "Constants.h"
#include <frc2/command/SubsystemBase.h>
#include <networktables/NetworkTable.h>
#include <networktables/NetworkTableInstance.h>

namespace X_ConVision {
    namespace AlignToPlayerStation {
        constexpr float P = 0.15;
        constexpr float I = 0.0;
        constexpr float D = 0.0;
    }
}

class Vision : public frc2::SubsystemBase {
 public:
  Vision();

#ifdef ENABLE_VISION
  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic();

  double Align();

  void ToggleLight();
#endif // ENABLE_VISION

 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
  std::shared_ptr<NetworkTable> m_tabLimelight;
  float m_tx;
};
