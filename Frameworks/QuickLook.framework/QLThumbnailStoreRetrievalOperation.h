/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class NSData, NSDictionary, NSError, NSURL, QLThumbnailAddition;

@interface QLThumbnailStoreRetrievalOperation : NSOperation
{
    NSURL *_documentURL;
    NSError *_error;
    _Bool _finished;
    _Bool _executing;
    QLThumbnailAddition *_addition;
    NSURL *_thumbnailStoreURL;
}

@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(retain) NSError *error; // @synthesize error=_error;
@property(readonly) NSData *serializedQuickLookMetadataDictionary;
@property(readonly) NSDictionary *thumbnailImagesDictionary;
@property(readonly) NSURL *thumbnailStoreURL;
- (void)_finishWithError:(id)arg1;
- (void)main;
- (void)start;
- (_Bool)_finishIfCancelled;
- (void)_addData:(id)arg1 atRelativePath:(id)arg2 toArchive:(struct archive *)arg3;
- (void)cancel;
- (id)description;
- (void)dealloc;
- (id)initWithDocumentAtURL:(id)arg1;
- (_Bool)isConcurrent;

@end

