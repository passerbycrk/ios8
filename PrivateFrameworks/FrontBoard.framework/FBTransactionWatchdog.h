/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "BSWatchdog.h"

@class FBTransaction;

@interface FBTransactionWatchdog : BSWatchdog
{
    FBTransaction *_transaction;
}

@property(readonly, retain, nonatomic) FBTransaction *transaction; // @synthesize transaction=_transaction;
- (void)_dumpDebugInfo;
- (void)_watchdogTimerFired;
- (void)invalidate;
- (void)dealloc;
- (id)initWithTransaction:(id)arg1;

@end
