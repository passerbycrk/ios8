/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SFCompanionXPCManagerProtocol <NSObject>
- (void)createUnlockManagerWithReply:(id)arg1;
- (void)createContinuityScannerForClientProxy:(id)arg1 reply:(id)arg2;
- (void)createActivityAdvertiserForClientProxy:(id)arg1 reply:(id)arg2;
- (void)createCompanionStreamWithService:(id)arg1 reply:(id)arg2;
- (void)createCompanionConnectionManagerForService:(id)arg1 clientProxy:(id)arg2 reply:(id)arg3;
- (void)createCompanionServiceManagerWithIdentifier:(id)arg1 clientProxy:(id)arg2 reply:(id)arg3;
- (void)createCompanionBrowserWithIdentifier:(id)arg1 serviceType:(id)arg2 clientProxy:(id)arg3 reply:(id)arg4;
@end
