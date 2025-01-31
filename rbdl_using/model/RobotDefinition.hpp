#ifndef ROBOT_DEFINITION
#define ROBOT_DEFINITION

#include "common_utils/common.hpp"

// namespace robot{
//     constexpr int num_q = 19;
//     constexpr int num_qdot = 18;
//     constexpr int num_act_joint = 12;
//     constexpr int num_virtual = 6;
// };

namespace robot{
    constexpr int num_q = 9;
    constexpr int num_qdot = 8;
    constexpr int num_act_joint = 2;
    constexpr int num_virtual = 6;
};

// namespace robot_link{
//     constexpr int trunk = 0;
//     constexpr int FR_foot = 2;
//     constexpr int FL_foot = 1;
//     constexpr int RR_foot = 4;
//     constexpr int RL_foot = 3;
// };

namespace robot_link{
    constexpr int base_link = 0;
    constexpr int link1 = 1;
    constexpr int link2 = 2;
};

namespace robot_joint{
    constexpr int virtual_X = 0;
    constexpr int virtual_Y = 1;
    constexpr int virtual_Z = 2;
    constexpr int virtual_Rx = 3;
    constexpr int virtual_Ry = 4;
    constexpr int virtual_Rz = 5;

    constexpr int joint1 = 6;
    constexpr int joint2 = 7;

    constexpr int virtual_Rw = 8;
};

// namespace robot_joint{
//     constexpr int virtual_X = 0;
//     constexpr int virtual_Y = 1;
//     constexpr int virtual_Z = 2;
//     constexpr int virtual_Rx = 3;
//     constexpr int virtual_Ry = 4;
//     constexpr int virtual_Rz = 5;

//     constexpr int FL_hip_joint = 6;
//     constexpr int FL_thigh_joint = 7;
//     constexpr int FL_calf_joint = 8;
    
//     constexpr int FR_hip_joint = 9;
//     constexpr int FR_thigh_joint = 10;
//     constexpr int FR_calf_joint = 11;
    
//     constexpr int RL_hip_joint = 12;
//     constexpr int RL_thigh_joint = 13;
//     constexpr int RL_calf_joint = 14;
    
//     constexpr int RR_hip_joint = 15;
//     constexpr int RR_thigh_joint = 16;
//     constexpr int RR_calf_joint = 17;
      
//     constexpr int virtual_Rw = 18;
// };
extern const char* link_name[];

#endif

