/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "QLPreviewItem-Protocol.h"

@class MFAttachmentManager, MFMimePart, NSMutableDictionary, NSString, NSURL;

@interface MFAttachment : NSObject <QLPreviewItem>
{
    NSMutableDictionary *_metadata;
    MFAttachmentManager *_attachmentManager;
    _Bool _isDataAvailableLocally;
    _Bool _isUserFacing;
    NSURL *_url;
    MFMimePart *_part;
    NSString *_disposition;
    unsigned long long _encodedFileSize;
    unsigned long long _progressInterval;
    double _progressTimeInterval;
    id _fetchCompletionBlock;
    id _fetchProgressBlock;
    id <MFDataConsumer> _customConsumer;
    unsigned long long _lastProgressBytes;
    double _lastProgressTime;
}

@property(nonatomic) double lastProgressTime; // @synthesize lastProgressTime=_lastProgressTime;
@property(nonatomic) unsigned long long lastProgressBytes; // @synthesize lastProgressBytes=_lastProgressBytes;
@property(nonatomic) MFAttachmentManager *attachmentManager; // @synthesize attachmentManager=_attachmentManager;
@property(nonatomic) _Bool isUserFacing; // @synthesize isUserFacing=_isUserFacing;
@property(retain, nonatomic) id <MFDataConsumer> customConsumer; // @synthesize customConsumer=_customConsumer;
@property(copy) id fetchProgressBlock; // @synthesize fetchProgressBlock=_fetchProgressBlock;
@property(copy, nonatomic) id fetchCompletionBlock; // @synthesize fetchCompletionBlock=_fetchCompletionBlock;
@property(nonatomic) double progressTimeInterval; // @synthesize progressTimeInterval=_progressTimeInterval;
@property(nonatomic) unsigned long long progressInterval; // @synthesize progressInterval=_progressInterval;
@property(nonatomic) unsigned long long encodedFileSize; // @synthesize encodedFileSize=_encodedFileSize;
@property(copy, nonatomic) NSString *disposition; // @synthesize disposition=_disposition;
@property(retain, nonatomic) MFMimePart *part; // @synthesize part=_part;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)textEncodingGuessWithData:(id)arg1;
- (id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2;
- (void)writeToDiskWithData:(id)arg1;
- (id)fileAttributes;
- (id)storageLocationWithMessage:(id)arg1;
@property(nonatomic) unsigned long long decodedFileSize;
@property(copy, nonatomic) NSString *mimeType;
- (void)setContentID:(id)arg1;
@property(readonly) NSString *contentID;
@property(nonatomic) unsigned long long setupComplete;
@property(copy, nonatomic) NSString *path;
@property(retain, nonatomic) NSString *fileName;
- (_Bool)isImageFile;
@property(readonly) _Bool isContainedInCompose;
@property(readonly) _Bool isContainedInRFC822;
@property(readonly) NSString *previewItemTitle;
@property(readonly) NSURL *previewItemURL;
@property(readonly) NSString *inferredMimeType;
@property(readonly) _Bool shouldAutoDownload;
@property(readonly) unsigned long long maxSizeAllowedOverCurrentNetwork;
@property(readonly) _Bool isDataAvailableLocally;
- (id)description;
- (void)dealloc;
- (void)cancel;
- (id)fetchDataSynchronously:(id *)arg1;
- (void)fetchData;
- (id)decodeFilterWithDataConsumer:(id)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)metadataValueForKey:(id)arg1;
- (id)initWithURL:(id)arg1 attachmentManager:(id)arg2;

@end
