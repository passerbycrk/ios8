/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreMotion/CMLogItem.h>

@class CMAttitude;

@interface CMDeviceMotion : CMLogItem
{
    id _internal;
}

@property(readonly, nonatomic) _Bool doingBiasEstimation;
@property(readonly, nonatomic) _Bool doingYawCorrection;
@property(readonly, nonatomic) int magneticFieldCalibrationLevel;
@property(readonly, nonatomic) CDStruct_27fd20ed magneticField;
@property(readonly, nonatomic) CDStruct_31142d93 userAcceleration;
@property(readonly, nonatomic) CDStruct_31142d93 gravity;
@property(readonly, nonatomic) CDStruct_31142d93 rotationRate;
@property(readonly, nonatomic) CMAttitude *attitude;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceMotion:(CDStruct_7fb6ae47)arg1 andTimestamp:(double)arg2;

@end

