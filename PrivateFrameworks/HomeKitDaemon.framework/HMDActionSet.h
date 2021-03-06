/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "HMMessageReceiver-Protocol.h"

@class HMDHome, HMMessageDispatcher, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMDActionSet : NSObject <HMMessageReceiver>
{
    NSString *_name;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMMessageDispatcher *_msgDispatcher;
    HMDHome *_home;
    NSMutableArray *_currentActions;
    long long _currentExecutingAction;
    NSArray *_currentExecutionActions;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *currentExecutionActions; // @synthesize currentExecutionActions=_currentExecutionActions;
@property(nonatomic) long long currentExecutingAction; // @synthesize currentExecutingAction=_currentExecutingAction;
@property(retain, nonatomic) NSMutableArray *currentActions; // @synthesize currentActions=_currentActions;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HMMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)_executeAction;
- (void)_execute:(id)arg1 responseHandler:(id)arg2;
- (void)_stopAndReportStatus:(id)arg1;
- (_Bool)isValid;
- (void)_handleReplaceActionValueRequest:(id)arg1;
- (void)_handleRenameRequest:(id)arg1;
- (void)_handleRemoveActionRequest:(id)arg1;
- (void)_removeAction:(id)arg1 message:(id)arg2;
- (void)_handleAddActionRequest:(id)arg1;
- (void)_registerForMessages;
- (id)actionWithUUID:(id)arg1;
- (void)removeAccessory:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSArray *actions;
- (void)configure:(id)arg1 queue:(id)arg2;
- (void)executeWithTriggerSource:(id)arg1;
- (void)executeWithResponseHandler:(id)arg1;
- (id)initWithName:(id)arg1 home:(id)arg2 queue:(id)arg3;

@end

