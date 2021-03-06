/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CMNatalimeterInternal;

@interface CMNatalimeter : NSObject
{
    CMNatalimeterInternal *_internal;
}

+ (_Bool)isNatalimeterAvailable;
+ (void)setUserProfile:(id)arg1;
+ (id)userProfile;
@property(readonly, nonatomic) CMNatalimeterInternal *_internal; // @synthesize _internal;
- (void)stopAbsoluteNatalimetryDataUpdates;
- (void)startAbsoluteNatalimetryDataUpdatesWithHandler:(id)arg1;
- (void)queryAbsoluteNatalimetryDataSinceRecord:(long long)arg1 withHandler:(id)arg2;
- (void)setSession:(long long)arg1 withCompletionHandler:(id)arg2;
- (void)dealloc;
- (id)init;

@end

