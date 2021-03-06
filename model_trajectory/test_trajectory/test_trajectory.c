/* User code: This file will not be overwritten by TASTE. */

#include "test_trajectory.h"

#include "base_support/baseUtils.h"
#include <math.h>

// Globals
int i;
asn1SccVector3d tv;
asn1SccWaypoint wp, wp2;
asn1SccMotion2D cmd;
asn1SccPose pose, pose2;
asn1SccVector3d zAxis;


void test_trajectory_startup()
{
    // Trajectory vector
    tv = Vector3d_create(0.0, 0.0, 0.0);

    // Waypoint
    wp.position = Vector3d_create(0.0, 0.0, 0.0);
    wp.heading = M_PI / 3.0;
    wp.tol_position = 0.0;
    wp.tol_heading = 0.0;
    wp2.position = Vector3d_create(0.0, 0.0, 0.0);
    wp2.heading = -M_PI / 3.0;
    wp2.tol_position = 0.0;
    wp2.tol_heading = 0.0;

    // Motion command and pose
    cmd.translation = 0.1;
    cmd.rotation = 0.0;
    
    zAxis = Vector3d_create(0.0, 0.0, 1.0);
    pose.pos = Vector3d_create(0.0, 0.0, 0.0);
    pose.orient =  Orientation_angleAxis(M_PI / 3.0, &zAxis);
    pose2.pos = Vector3d_create(0.0, 0.0, 0.0);
    pose2.orient =  Orientation_angleAxis(-M_PI / 3.0, &zAxis);
}

void test_trajectory_PI_trigger()
{
    // Trajectory
    tv.arr[0] = i/100.0;
    tv.arr[1] = i/50.0;
    test_trajectory_RI_updateTrajectory(&tv);
    
    // Waypoint
    if (0 == i % 100)
    {
        wp.position.arr[0] = (i+100)/100.0;
        wp.position.arr[1] = (i+100)/50.0;
        test_trajectory_RI_updateWaypoint(&wp);
    }
    
    // Motion command
    if (0 == i % 100)
    {
        pose.pos.arr[0] = i/100.0;
        pose.pos.arr[1] = i/50.0;
        test_trajectory_RI_updateMotionCommand(&cmd);
        test_trajectory_RI_updatePose(&pose);
    }
    
    // Trajectory 2
    tv.arr[0] = i/100.0;
    tv.arr[1] = -i/50.0;
    test_trajectory_RI_updateTrajectory2(&tv);
    
    // Waypoint 2
    if (0 == i % 100)
    {
        wp2.position.arr[0] = (i+100)/100.0;
        wp2.position.arr[1] = -(i+100)/50.0;
        test_trajectory_RI_updateWaypoint2(&wp2);
    }
    
    // Motion command 2
    if (0 == i % 100)
    {
        pose2.pos.arr[0] = i/100.0;
        pose2.pos.arr[1] = -i/50.0;
        test_trajectory_RI_updateMotionCommand2(&cmd);
        test_trajectory_RI_updatePose2(&pose2);
    }
    
    i++;

    // Exit automatically to collect coverage data
    if (i > 100)
    {
        exit(0);
    }
}

