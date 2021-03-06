/*
 *  MachTiming.h
 *  Objective-Gems
 *
 * From: http://macresearch.org/tutorial_performance_and_time
 *
 * Public Domain
 */

#include <mach/mach_time.h>

/** Calculates the difference, in seconds, between two time values that were
 * obtained through mach_absolute_time().
 *
 * @param endTime the later time value.
 * @param startTime the earlier time value.
 * @return the time difference in seconds.
 */
double mach_absolute_difference_seconds(uint64_t endTime, uint64_t startTime);
