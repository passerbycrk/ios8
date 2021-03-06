/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CameraKit/CAMCaptureResponse.h>

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSString, UIImage;

@interface CAMStillImageCaptureResponse : CAMCaptureResponse
{
    _Bool _transient;
    _Bool _finalResponse;
    UIImage *_stillImageOriginalImage;
    NSData *_stillImageJPEGData;
    struct opaqueCMSampleBuffer *_stillImageOriginalSampleBuffer;
    UIImage *_stillImageUnfilteredPreviewImage;
    UIImage *_stillImageFilteredPreviewImage;
    NSMutableDictionary *_stillImageJob;
    id _stillImageRequestEnqueuedBlock;
    id _stillImageCompletionBlock;
    NSDictionary *_adjustmentFilters;
    NSArray *_effectFilters;
    NSString *_avalancheUUID;
    NSString *_timelapseDestinationPath;
}

@property(copy, nonatomic) NSString *timelapseDestinationPath; // @synthesize timelapseDestinationPath=_timelapseDestinationPath;
@property(copy, nonatomic) NSString *avalancheUUID; // @synthesize avalancheUUID=_avalancheUUID;
@property(copy, nonatomic) NSArray *effectFilters; // @synthesize effectFilters=_effectFilters;
@property(copy, nonatomic) NSDictionary *adjustmentFilters; // @synthesize adjustmentFilters=_adjustmentFilters;
@property(copy, nonatomic) id stillImageCompletionBlock; // @synthesize stillImageCompletionBlock=_stillImageCompletionBlock;
@property(copy, nonatomic) id stillImageRequestEnqueuedBlock; // @synthesize stillImageRequestEnqueuedBlock=_stillImageRequestEnqueuedBlock;
@property(retain, nonatomic) NSMutableDictionary *stillImageJob; // @synthesize stillImageJob=_stillImageJob;
@property(retain, nonatomic) UIImage *stillImageFilteredPreviewImage; // @synthesize stillImageFilteredPreviewImage=_stillImageFilteredPreviewImage;
@property(retain, nonatomic) UIImage *stillImageUnfilteredPreviewImage; // @synthesize stillImageUnfilteredPreviewImage=_stillImageUnfilteredPreviewImage;
@property(nonatomic) struct opaqueCMSampleBuffer *stillImageOriginalSampleBuffer; // @synthesize stillImageOriginalSampleBuffer=_stillImageOriginalSampleBuffer;
@property(retain, nonatomic) NSData *stillImageJPEGData; // @synthesize stillImageJPEGData=_stillImageJPEGData;
@property(retain, nonatomic) UIImage *stillImageOriginalImage; // @synthesize stillImageOriginalImage=_stillImageOriginalImage;
@property(nonatomic, getter=isFinalResponse) _Bool finalResponse; // @synthesize finalResponse=_finalResponse;
@property(nonatomic, getter=isTransient) _Bool transient; // @synthesize transient=_transient;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *stillImageMetadata;
@property(readonly, nonatomic) UIImage *thumbnailImage;
- (void)dealloc;
- (id)init;

@end

