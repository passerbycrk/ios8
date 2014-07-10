/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"
#import "PCLoggingDelegate-Protocol.h"

@class NSDictionary;

@protocol PCGrowthAlgorithm <PCLoggingDelegate, NSObject>
@property(readonly, copy, nonatomic) NSDictionary *cacheInfo;
@property(readonly, nonatomic) unsigned long long countOfGrowthActions;
@property(nonatomic) double maximumKeepAliveInterval;
@property(nonatomic) double minimumKeepAliveInterval;
@property(readonly, nonatomic) double currentKeepAliveInterval;
- (void)processNextAction:(int)arg1;
- (_Bool)useIntervalIfImprovement:(double)arg1;
- (id)initWithCacheInfo:(id)arg1 loggingIdentifier:(id)arg2 algorithmName:(id)arg3;
@end
