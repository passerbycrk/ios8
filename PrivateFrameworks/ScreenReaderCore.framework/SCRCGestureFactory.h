/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class SCRCTargetSelectorTimer;

@interface SCRCGestureFactory : NSObject
{
    double _stallDistance;
    double _maxDimension;
    double _thumbRegion;
    int _orientation;
    int _directions[7];
    struct {
        double horizontal;
        double vertical;
    } _axisFlipper;
    double _scaledTrackingDistance;
    _Bool _setTrackingTimer;
    double _flickVelocityThreshold;
    double _tapVelocityThreshold;
    double _echoWaitTime;
    struct CGRect _tapSpeedRegion;
    double _tapVelocityThresholdForRegion;
    _Bool _inTapSpeedRegionForDownEvent;
    struct CGRect _mainFrame;
    struct CGRect _gutterFrame;
    double _lastTime;
    double _lastDownTime;
    double _lastGutterDownTime;
    double _lastDegrees;
    double _startDegrees;
    double _startDistance;
    _Bool _startedInGutter;
    double _requireDelayBeforeTracking;
    _Bool _requireUp;
    _Bool _thumbRejectionEnabled;
    double _thumbRejectionDistance;
    int _state;
    int _previousState;
    int _direction;
    double _directionalSlope;
    struct SCRCFingerState _finger[2];
    unsigned long long _absoluteFingerCount;
    unsigned short _fingerCount;
    unsigned short _lastFingerCount;
    double _distance;
    unsigned long long _tapCount;
    struct CGRect _tapFrame;
    struct CGRect _tapMultiFrame;
    struct {
        id track;
        id tap;
        id gutterUp;
        id splitTap;
    } _delegate;
    SCRCTargetSelectorTimer *_trackingTimer;
    struct {
        _Bool down;
        _Bool dead;
        _Bool gutter;
        unsigned long long current;
        unsigned long long digits;
        unsigned long long count;
        struct CGRect frame;
        struct CGPoint location[8];
        struct CGPoint locationPerTap[8];
        unsigned long long digitsPerTap;
        double thisTime;
        double lastTime;
    } _tap;
    SCRCTargetSelectorTimer *_tapTimer;
    SCRCTargetSelectorTimer *_gutterUpTimer;
    struct {
        SCRCGestureFactory *factory;
        _Bool isSplitting;
        _Bool isTapping;
        _Bool fastTrack;
        _Bool tapDead;
        _Bool timedOut;
        _Bool active;
        unsigned long long fingerIdentifier;
        double fingerDownTime;
        struct CGPoint startTapLocation;
        struct CGPoint lastTapLocation;
        struct CGPoint primaryFingerLocation;
        double tapDistance;
        int state;
    } _split;
}

@property(nonatomic) _Bool thumbRejectionEnabled; // @synthesize thumbRejectionEnabled=_thumbRejectionEnabled;
- (id)gestureStateString;
- (double)tapInterval;
- (struct CGPoint)tapPointWeightedToSides;
- (struct CGPoint)tapPoint;
- (struct CGRect)multiTapFrame;
- (struct CGRect)tapFrame;
- (struct CGPoint)endLocation;
- (struct CGPoint)startLocation;
- (struct CGPoint)rawAverageLocation;
- (struct CGPoint)rawLocation;
- (_Bool)tapIsDown;
- (unsigned long long)tapCount;
- (unsigned long long)fingerCount;
- (unsigned long long)absoluteFingerCount;
- (double)distance;
- (double)velocity;
- (double)vector;
- (int)direction;
- (int)gestureState;
- (double)directionalSlope;
- (void)reset;
- (void)_up;
- (void)_drag:(id)arg1;
- (void)_down:(id)arg1;
- (void)handleGestureEvent:(id)arg1;
- (_Bool)_handleSplitEvent:(id)arg1;
- (_Bool)_handleSplitTap;
- (void)_updateStartWithPoint:(struct CGPoint)arg1 time:(double)arg2;
- (void)_processUpAndPost:(_Bool)arg1;
- (void)_handleGutterUp;
- (void)_enterTrackingMode:(id)arg1;
- (void)_handleTap;
- (void)_updateTapState;
- (void)_updateMultiTapFrame;
- (struct CGRect)_currentTapRect;
- (struct CGRect)mainFrame;
- (void)dealloc;
- (int)orientation;
- (void)setOrientation:(int)arg1;
- (double)tapSpeed;
- (void)setTapSpeedTimeThreshold:(double)arg1 forRegion:(struct CGRect)arg2;
- (void)setTapSpeed:(double)arg1;
- (double)flickSpeed;
- (void)setFlickSpeed:(double)arg1;
- (id)initWithSize:(struct CGSize)arg1 delegate:(id)arg2 threadKey:(id)arg3;
- (id)initWithSize:(struct CGSize)arg1 delegate:(id)arg2;

@end

