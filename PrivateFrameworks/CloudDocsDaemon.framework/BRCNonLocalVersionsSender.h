/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BRNonLocalVersionSending-Protocol.h"

@class BRCItemID, BRCLocalContainer, BRCStatInfo, CKFetchRecordVersionsOperation, NSString, NSURL;

// Not exported
@interface BRCNonLocalVersionsSender : NSObject <BRNonLocalVersionSending>
{
    id <BRNonLocalVersionReceiving> _receiver;
    BRCItemID *_itemID;
    BRCLocalContainer *_container;
    BRCStatInfo *_st;
    NSString *_currentEtag;
    CKFetchRecordVersionsOperation *_fetchRecordVersionsOperation;
    NSString *_storagePathPrefix;
    NSURL *_logicalURL;
    struct NSObject *_storage;
    NSURL *_physicalURL;
}

@property(readonly, nonatomic) NSURL *physicalURL; // @synthesize physicalURL=_physicalURL;
- (void).cxx_destruct;
- (oneway void)invalidate;
- (void)listNonLocalVersionsAtURL:(id)arg1 reply:(id)arg2;
- (id)initWithDocumentURL:(id)arg1 root:(id)arg2 XPCReceiver:(id)arg3 error:(id *)arg4;

@end

