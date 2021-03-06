/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class _IDSIDQueryController;

@interface IDSIDQueryController : NSObject
{
    _IDSIDQueryController *_internal;
}

+ (id)sharedInstance;
- (_Bool)requestIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;
- (_Bool)requestIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;
- (id)_currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (long long)_currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (id)_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (long long)_refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (_Bool)_flushQueryCacheForService:(id)arg1;
- (_Bool)_warmupQueryCacheForService:(id)arg1;
- (long long)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (_Bool)_hasCacheForService:(id)arg1;
- (_Bool)currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;
- (_Bool)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;
- (_Bool)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;
- (_Bool)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;
- (_Bool)removeListenerID:(id)arg1 forService:(id)arg2;
- (void)addListenerID:(id)arg1 forService:(id)arg2;
- (void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3;
- (void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(id)arg4;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)init;

@end

