#include "main.h"
#include "okapi/api.hpp"

using namespace okapi;

Motor dtL(10, false, AbstractMotor::gearset::red);
Motor dtR(1, false, AbstractMotor::gearset::red);
auto chassis = ChassisControllerFactory::create(
    dtL, dtR,
    AbstractMotor::gearset::red,
    {4.25, 12.0});
auto leftDTEnc = IntegratedEncoder(dtL);
auto rightDTEnc = IntegratedEncoder(dtR);

Motor dr4bL(20, true, AbstractMotor::gearset::green);
auto dr4bLEncoder = IntegratedEncoder(dr4bL);
Motor dr4bR(11, false, AbstractMotor::gearset::green);
auto dr4bREncoder = IntegratedEncoder(dr4bR);
MotorGroup dr4b({dr4bL, dr4bR});


Motor intakeLeft(15, false, AbstractMotor::gearset::red);
Motor intakeRight(16, true, AbstractMotor::gearset::red);

MotorGroup intake({intakeLeft,intakeRight});

Motor tilter(3, true, AbstractMotor::gearset::red);
auto tilterEncoder = IntegratedEncoder(tilter);

ADIGyro gyro = ADIGyro('A', .1);
/*----------TEMPLATES------------------
okapi::MotorGroup right2({10, 20});

auto rightEB2 = IntegratedEncoder(11);

auto chassis2 = ChassisControllerFactory::create(
    left2, right2,
    AbstractMotor::gearset::green,
    {wheel diameter, 1.0});
};

Motor dr4bL2 = 15;

auto dr4b2 = ChassisControllerFactory::create(
    dr4bL2, dr4bR2,
    AbstractMotor::gearset::red
    );

ADIGyro gyro = ADIGyro('A', .1);
*/
