/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VoiceMemos/RCPreviewController.h>

@class RCCompositionController;

@interface RCSavedRecordingPreviewController : RCPreviewController
{
    _Bool _postPrepareShouldPlay;
    CDStruct_73a5d3ca _postPrepareTimeRange;
    double _postPrepareStartTime;
    RCCompositionController *_compositionController;
}

+ (id)sharedRecordingPreviewController;
@property(retain, nonatomic) RCCompositionController *compositionController; // @synthesize compositionController=_compositionController;
- (void).cxx_destruct;
- (void)playerCurrentRateDidChange:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (CDStruct_73a5d3ca)playableTimeRange;
- (void)setPlayableTimeRange:(CDStruct_73a5d3ca)arg1;
- (double)currentTime;
- (void)stop;
- (void)pause;
- (void)playOrRestart;
- (void)playWithTimeRange:(CDStruct_73a5d3ca)arg1 startTime:(double)arg2;

@end
