/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface CHDView3D : NSObject
{
    int mRotationX;
    int mRotationY;
    int mDepthPercent;
    int mGapDepthPercent;
    int mHeightPercent;
    int mPerspective;
    _Bool mRightAngleAxes;
    _Bool mCluster;
    _Bool mAutoscale;
}

- (void)setAutoscale:(_Bool)arg1;
- (_Bool)isAutoscale;
- (void)setCluster:(_Bool)arg1;
- (_Bool)isCluster;
- (void)setRightAngleAxes:(_Bool)arg1;
- (_Bool)isRightAngleAxes;
- (void)setPerspective:(int)arg1;
- (int)perspective;
- (void)setHeightPercent:(int)arg1;
- (int)heightPercent;
- (void)setGapDepthPercent:(int)arg1;
- (int)gapDepthPercent;
- (void)setDepthPercent:(int)arg1;
- (int)depthPercent;
- (void)setRotationX:(int)arg1;
- (int)rotationX;
- (void)setRotationY:(int)arg1;
- (int)rotationY;
- (id)init;

@end
