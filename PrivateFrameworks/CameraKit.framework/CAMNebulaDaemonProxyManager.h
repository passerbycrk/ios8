/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CAMNebulaDaemonClientProtocol-Protocol.h"
#import "CAMNebulaDaemonProtocol-Protocol.h"

@class NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface CAMNebulaDaemonProxyManager : NSObject <CAMNebulaDaemonClientProtocol, CAMNebulaDaemonProtocol>
{
    NSObject<OS_dispatch_queue> *__queue;
    NSXPCConnection *__connection;
}

+ (id)_clientProtocolInterface;
+ (id)_daemonProtocolInterface;
+ (id)sharedInstance;
@property(readonly, nonatomic) NSXPCConnection *_connection; // @synthesize _connection=__connection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_queue; // @synthesize _queue=__queue;
- (void).cxx_destruct;
- (void)forceStopCaptureWithReasons:(long long)arg1;
- (void)updatePendingWorkFromDiskForceEndLastSession:(_Bool)arg1;
- (void)stopNebulaWithUUID:(id)arg1;
- (void)finishCaptureForNebulaWithUUID:(id)arg1;
- (void)updateNebulaWithUUID:(id)arg1;
- (void)resumeNebulaWithUUID:(id)arg1;
- (void)startNebulaWithUUID:(id)arg1;
- (void)_getProxyForExecutingBlock:(id)arg1;
- (void)_closeConnectionToDaemon;
- (void)_ensureConnectionToDaemon;
- (void)closeConnectionToDaemon;
- (void)ensureConnectionToDaemon;
- (id)init;

@end

