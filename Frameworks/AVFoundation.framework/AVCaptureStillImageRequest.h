/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVCaptureBracketedStillImageSettings;

@interface AVCaptureStillImageRequest : NSObject
{
    id _sbufCompletionBlock;
    id _iosurfaceCompletionBlock;
    id _bracketedCaptureCompletionBlock;
    long long _settingsID;
    unsigned int _shutterSoundID;
    AVCaptureBracketedStillImageSettings *_bracketedSettings;
}

+ (id)request;
@property(retain) AVCaptureBracketedStillImageSettings *bracketedSettings; // @synthesize bracketedSettings=_bracketedSettings;
@property unsigned int shutterSoundID; // @synthesize shutterSoundID=_shutterSoundID;
@property long long settingsID; // @synthesize settingsID=_settingsID;
@property(copy) id bracketedCaptureCompletionBlock; // @synthesize bracketedCaptureCompletionBlock=_bracketedCaptureCompletionBlock;
@property(copy) id iosurfaceCompletionBlock; // @synthesize iosurfaceCompletionBlock=_iosurfaceCompletionBlock;
@property(copy) id sbufCompletionBlock; // @synthesize sbufCompletionBlock=_sbufCompletionBlock;
- (void)dealloc;

@end

