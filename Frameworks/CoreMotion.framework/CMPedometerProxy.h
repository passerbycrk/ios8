/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface CMPedometerProxy : NSObject
{
    NSObject<OS_dispatch_queue> *fInternalQueue;
    struct CLConnectionClient *fLocationdConnection;
    _Bool fStartedUpdates;
    NSObject<OS_dispatch_queue> *fAppQueue;
    long long fStepCountFromStart;
    long long fStepCountOffset;
    double fDistanceFromStart;
    double fDistanceOffset;
    int fFloorAscendedStart;
    int fFloorAscendedOffset;
    int fFloorDescendedStart;
    int fFloorDescendedOffset;
}

- (void)_handleRecordQueryResponse:(struct CLConnectionMessage *)arg1 withHandler:(id)arg2;
- (void)_handleQueryResponse:(struct CLConnectionMessage *)arg1 withHandler:(id)arg2;
- (void)_startPedometerUpdatesFromDate:(id)arg1 withHandler:(id)arg2;
- (void)_queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(id)arg3;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end

