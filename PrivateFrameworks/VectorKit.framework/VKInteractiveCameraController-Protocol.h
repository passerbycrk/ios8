/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class GEOMapRegion;

@protocol VKInteractiveCameraController <NSObject>
@property(readonly, nonatomic) GEOMapRegion *mapRegionOfInterest;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) double pitch;
@property(readonly, nonatomic) double presentationYaw;
@property(readonly, nonatomic) double yaw;
@property(readonly, nonatomic) CDStruct_071ac149 centerCoordinate;
- (_Bool)isFullyPitched;
- (_Bool)isPitched;
- (_Bool)canEnter3DMode;
- (void)exit3DMode;
- (void)enter3DMode;
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(id)arg5;
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(id)arg3;
- (_Bool)snapMapIfNecessary:(const struct VKPoint *)arg1 animated:(_Bool)arg2;
- (_Bool)restoreViewportFromInfo:(id)arg1;
- (id)viewportInfo;
- (_Bool)currentZoomLevelAllowsRotation;
- (long long)maximumNormalizedZoomLevel;
- (long long)minimumNormalizedZoomLevel;
- (long long)tileSize;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(id)arg5;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(_Bool)arg4 completion:(id)arg5;
- (void)setYaw:(double)arg1 animated:(_Bool)arg2;
- (double)altitude;
- (void)setCenterCoordinate:(CDStruct_071ac149)arg1 animated:(_Bool)arg2;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 timingCurve:(id)arg6 completion:(void)arg7;
- (void)stopPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 translation:(double)arg2;
- (void)startPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg1 newValue:(double)arg2;
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopPanningAtPoint:(struct CGPoint)arg1;
- (void)updatePanWithTranslation:(struct CGPoint)arg1;
- (void)startPanningAtPoint:(struct CGPoint)arg1 panAtStartPoint:(_Bool)arg2;
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(id)arg3;
@end
