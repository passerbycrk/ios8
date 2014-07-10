/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BBServerConduitClientInterface-Protocol.h"

@class NSXPCConnection;

@interface BBServerConduit : NSObject <BBServerConduitClientInterface>
{
    NSXPCConnection *_connection;
}

+ (id)sharedConduit;
+ (id)clientInterface;
+ (id)serverInterface;
- (void)weeAppWithBundleID:(id)arg1 getHiddenFromUser:(id)arg2;
- (void)weeAppWithBundleID:(id)arg1 setHiddenFromUser:(_Bool)arg2;
- (void)sendMessageToDataProviderSectionID:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end
