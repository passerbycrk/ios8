/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAssetWriterInput, AVAssetWriterInputMetadataAdaptorInternal;

@interface AVAssetWriterInputMetadataAdaptor : NSObject
{
    AVAssetWriterInputMetadataAdaptorInternal *_internal;
}

+ (id)assetWriterInputMetadataAdaptorWithAssetWriterInput:(id)arg1;
+ (void)initialize;
- (_Bool)appendTimedMetadataGroup:(id)arg1;
@property(readonly, nonatomic) AVAssetWriterInput *assetWriterInput;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithAssetWriterInput:(id)arg1;
- (id)init;

@end

