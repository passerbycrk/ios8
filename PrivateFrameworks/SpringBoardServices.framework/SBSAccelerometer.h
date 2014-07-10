/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BKSAccelerometerDelegate-Protocol.h"

@class BKSAccelerometer;

@interface SBSAccelerometer : NSObject <BKSAccelerometerDelegate>
{
    id <SBSAccelerometerDelegate> _delegate;
    BKSAccelerometer *_bksMirror;
}

- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (int)currentDeviceOrientation;
@property(nonatomic) _Bool orientationEventsEnabled;
@property(nonatomic) float zThreshold;
@property(nonatomic) float yThreshold;
@property(nonatomic) float xThreshold;
@property(nonatomic) double updateInterval;
@property(nonatomic) _Bool accelerometerEventsEnabled;
- (void)dealloc;
- (id)init;
@property(nonatomic) id <SBSAccelerometerDelegate> delegate;

@end
