/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CPLChangeBatch;

@interface PLCLoudPhotoLibraryBatchContainer : NSObject
{
    _Bool _wasSplit;
    _Bool _reachedMinSplit;
    CPLChangeBatch *_batch;
    unsigned long long _retryCount;
}

@property(nonatomic) _Bool reachedMinSplit; // @synthesize reachedMinSplit=_reachedMinSplit;
@property(nonatomic) _Bool wasSplit; // @synthesize wasSplit=_wasSplit;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) CPLChangeBatch *batch; // @synthesize batch=_batch;
- (id)batchesSplitForError;
- (void)incrementRetryCount;
- (void)addRecord:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;

@end

