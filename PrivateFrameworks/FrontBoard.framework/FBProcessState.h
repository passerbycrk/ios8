/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@interface FBProcessState : NSObject <NSCopying>
{
    int _pid;
    _Bool _running;
    _Bool _foreground;
    int _taskState;
    int _visibility;
}

@property(nonatomic) int visibility; // @synthesize visibility=_visibility;
@property(nonatomic) int taskState; // @synthesize taskState=_taskState;
@property(nonatomic, getter=isForeground) _Bool foreground; // @synthesize foreground=_foreground;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(nonatomic) int pid; // @synthesize pid=_pid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithPid:(int)arg1;
- (id)init;

@end

