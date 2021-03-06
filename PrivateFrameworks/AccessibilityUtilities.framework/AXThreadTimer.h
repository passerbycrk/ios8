/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <AccessibilityUtilities/AXTimer-Protocol.h>

@class AXThreadTimerTask, NSThread;

@interface AXThreadTimer : NSObject <AXTimer>
{
    NSThread *_thread;
    id _cancelBlock;
    _Bool _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    AXThreadTimerTask *_task;
}

@property(nonatomic) _Bool automaticallyCancelPendingBlockUponSchedulingNewBlock; // @synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property(retain, nonatomic) AXThreadTimerTask *task; // @synthesize task=_task;
- (void)dealloc;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic, getter=isPending) _Bool pending;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
- (void)cancel;
- (void)afterDelay:(double)arg1 processBlock:(id)arg2 cancelBlock:(void)arg3;
- (void)afterDelay:(double)arg1 processBlock:(id)arg2;
- (void)_runAfterDelay:(id)arg1;
- (id)initWithThread:(id)arg1;

@end

