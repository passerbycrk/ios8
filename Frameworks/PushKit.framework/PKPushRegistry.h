/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PKVoIPXPCClient-Protocol.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet;

@interface PKPushRegistry : NSObject <PKVoIPXPCClient>
{
    NSSet *_desiredPushTypes;
    id <PKPushRegistryDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_pushTypeToToken;
    NSMutableDictionary *_pushTypeToConnection;
}

+ (id)pushTypeToMachServiceName;
@property(retain, nonatomic) NSMutableDictionary *pushTypeToConnection; // @synthesize pushTypeToConnection=_pushTypeToConnection;
@property(retain, nonatomic) NSMutableDictionary *pushTypeToToken; // @synthesize pushTypeToToken=_pushTypeToToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <PKPushRegistryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)createConnectionForPushType:(id)arg1;
- (void)unregisterForPushType:(id)arg1;
- (void)registerForPushType:(id)arg1;
- (void)voipRegistrationFailed;
- (void)voipPayloadReceived:(id)arg1;
- (void)voipRegistrationSucceededWithDeviceToken:(id)arg1;
- (id)pushTokenForType:(id)arg1;
- (id)initWithQueue:(id)arg1;
@property(copy) NSSet *desiredPushTypes; // @synthesize desiredPushTypes=_desiredPushTypes;

@end
