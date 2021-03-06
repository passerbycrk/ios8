/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSURL;

// Not exported
@interface TSURemoteDefaults : NSObject
{
    NSObject<OS_dispatch_queue> *_checkQueue;
    NSObject<OS_dispatch_source> *_updateTimer;
}

+ (id)sharedDefaults;
- (void).cxx_destruct;
- (void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (id)URLRequest;
- (double)timeIntervalUntilNextUpdate;
- (void)checkForUpdate;
- (void)registerDefaults;
- (id)dictionaryForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initInternal;
@property(readonly, nonatomic) NSURL *downloadableContentURL;

@end

