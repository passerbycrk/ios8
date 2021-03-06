/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BRReachabilityObserver-Protocol.h"

@class BRReachabilityMonitor, NSHashTable, NSMapTable, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

// Not exported
@interface BRCSystemResourcesManager : NSObject <BRReachabilityObserver>
{
    NSObject<OS_dispatch_queue> *_notificationQueue;
    _Bool _invalidated;
    NSHashTable *_reachabilityObservers;
    BRReachabilityMonitor *_reachabilityMonitor;
    _Bool _isNetworkReachable;
    NSObject<OS_dispatch_source> *_isNetworkReachableTimer;
    NSHashTable *_powerObservers;
    int _powerNotifyToken;
    _Bool _powerLevelOK;
    NSObject<OS_dispatch_source> *_powerLevelOKTimer;
    NSMutableSet *_lowDiskSet;
    NSMutableDictionary *_lowDiskDict;
    NSObject<OS_dispatch_source> *_lowDiskSource;
    NSObject<OS_dispatch_source> *_lowDiskTimer;
    NSHashTable *_lowMemoryObservers;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    NSMapTable *_processObservers;
}

+ (id)manager;
- (void).cxx_destruct;
- (void)removeProcessMonitor:(id)arg1;
- (void)addProcessMonitor:(id)arg1 forProcessID:(int)arg2;
- (void)_invalidateProcessObservers;
- (void)_initProcessObservers;
- (void)_invalidateProcessMonitorObject:(id)arg1;
- (id)_createMonitoringObjectForProcessID:(int)arg1 observer:(id)arg2;
- (void)removeLowMemoryObserver:(id)arg1;
- (void)addLowMemoryObserver:(id)arg1;
- (void)_didReceiveMemoryWarning;
- (void)_invalidateLowMemory;
- (void)_initLowMemory;
- (void)removeLowDiskObserver:(id)arg1 forDevice:(int)arg2;
- (void)addLowDiskObserver:(id)arg1 forDevice:(int)arg2;
- (_Bool)hasEnoughSpaceForDevice:(int)arg1;
- (void)_processLowDiskNotification:(_Bool)arg1;
- (void)_resetLowDiskManager;
- (void)_invalidateLowDiskManager;
- (void)_initLowDiskManager;
- (void)removePowerObserver:(id)arg1;
- (void)addPowerObserver:(id)arg1;
- (void)_setPowerLevel:(_Bool)arg1;
- (void)_setPowerLevelWithCoalescing:(_Bool)arg1;
@property(readonly) _Bool isPowerOK;
- (void)_resetPowerManager;
- (void)_invalidatePowerManager;
- (void)_initPowerManager;
- (void)removeReachabilityObserver:(id)arg1;
- (void)addReachabilityObserver:(id)arg1;
- (void)_setNetworkReachable:(_Bool)arg1;
- (void)_setNetworkReachableWithCoalescing:(_Bool)arg1;
@property(readonly) _Bool isNetworkReachable;
- (void)_invalidateReachability;
- (void)_resetReachability;
- (void)_initReachability;
- (void)reachabilityMonitor:(id)arg1 didChangeReachabilityStatusTo:(_Bool)arg2;
- (void)reset;
- (void)suspend;
- (void)resume;
- (void)dealloc;
- (void)close;
- (id)init;

@end

