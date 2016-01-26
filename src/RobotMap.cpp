// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<SpeedController> RobotMap::chassisLeftMotor1;
std::shared_ptr<SpeedController> RobotMap::chassisLeftMotor2;
std::shared_ptr<SpeedController> RobotMap::chassisRightMotor1;
std::shared_ptr<SpeedController> RobotMap::chassisRightMotor2;
std::shared_ptr<RobotDrive> RobotMap::chassisRobotDrive41;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    chassisLeftMotor1.reset(new Talon(0));
    lw->AddActuator("Chassis", "LeftMotor1", (Talon&) chassisLeftMotor1);
    
    chassisLeftMotor2.reset(new Talon(1));
    lw->AddActuator("Chassis", "LeftMotor2", (Talon&) chassisLeftMotor2);
    
    chassisRightMotor1.reset(new Talon(2));
    lw->AddActuator("Chassis", "RightMotor1", (Talon&) chassisRightMotor1);
    
    chassisRightMotor2.reset(new Talon(3));
    lw->AddActuator("Chassis", "RightMotor2", (Talon&) chassisRightMotor2);
    
    chassisRobotDrive41.reset(new RobotDrive(chassisLeftMotor1, chassisLeftMotor2,
              chassisRightMotor1, chassisRightMotor2));
    
    chassisRobotDrive41->SetSafetyEnabled(true);
        chassisRobotDrive41->SetExpiration(0.1);
        chassisRobotDrive41->SetSensitivity(0.5);
        chassisRobotDrive41->SetMaxOutput(1.0);



    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
