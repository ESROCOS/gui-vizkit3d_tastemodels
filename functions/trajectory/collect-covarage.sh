#!/bin/bash -e

# Script derived from taste-collect-coverage.

# Run the tracer daemon - make sure only one instance exists at a time
if [ ! -f "$1" ]
then
    echo 'Usage: collect-coverage.sh binary'
else
    echo Executing binary for 10 seconds...
    "$1" &
    pid=$!
    sleep 10
    kill -SIGUSR2 $pid

    # Coverage: all files
    lcov --capture --directory . --output-file coverage_all.info --no-external
    genhtml coverage_all.info --output-directory coverage_all --no-function-coverage

    PWD=`pwd`

    # Coverage: excluding POHIC code, type encoders and test drivers code
    cp coverage_all.info coverage_filtered.info
    lcov --remove coverage_filtered.info \
         $PWD/binary.c/test_trajectory/test_trajectory/* \
         $PWD/binary.c/vizkit_motioncommand2/vizkit_motioncommand2/* \
         $PWD/binary.c/vizkit_trajectory2/vizkit_trajectory2/* \
         $PWD/binary.c/vizkit_waypoint2/vizkit_waypoint2/* \
         $PWD/binary.c/x86_partition_coverage_collector/* \
         $PWD/binary.c/auto-src_PLATFORM_NATIVE/* \
         --output-file coverage_filtered.info
    genhtml coverage_filtered.info --output-directory coverage_filtered --no-function-coverage

    # Coverage: only manually written code
    cp coverage_all.info coverage_noglue.info
    lcov --extract coverage_noglue.info \
         $PWD/binary.c/vizkit_motioncommand/vizkit_motioncommand/vizkit_motioncommand.c \
         $PWD/binary.c/vizkit_trajectory/vizkit_trajectory/vizkit_trajectory.c \
         $PWD/binary.c/vizkit_waypoint/vizkit_waypoint/vizkit_waypoint.c \
        --output-file coverage_noglue.info
    genhtml coverage_noglue.info --output-directory coverage_noglue --no-function-coverage
fi
