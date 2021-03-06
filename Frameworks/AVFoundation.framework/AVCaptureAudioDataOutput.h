/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureAudioDataOutputInternal, NSObject<OS_dispatch_queue>;

@interface AVCaptureAudioDataOutput : AVCaptureOutput
{
    AVCaptureAudioDataOutputInternal *_internal;
}

+ (id)alloc;
+ (void)initialize;
- (id)connectionMediaTypes;
- (id)recommendedAudioSettingsForAssetWriterWithOutputFileType:(id)arg1;
- (id)supportedAssetWriterOutputFileTypes;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property(readonly, nonatomic) id <AVCaptureAudioDataOutputSampleBufferDelegate> sampleBufferDelegate;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)init;

@end

