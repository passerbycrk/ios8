/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVWeakReferencingDelegateStorage, NSDictionary;

@interface AVCaptureVideoDataOutputInternal_FigRecorder : NSObject
{
    AVWeakReferencingDelegateStorage *delegateStorage;
    _Bool delegateRespondsToDidOutputSBufCallback;
    _Bool delegateRespondsToDidDropSBufCallback;
    NSDictionary *videoSettings;
    CDStruct_1b6d18a9 deprecatedMinFrameDuration;
    _Bool alwaysDiscardsLateVideoFrames;
}

- (void)dealloc;
- (id)init;

@end

