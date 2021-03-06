/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <BulletinBoard/BBDataProvider.h>

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface BBRemoteDataProvider : BBDataProvider
{
    NSString *_sectionID;
    NSString *_appBundleID;
    NSString *_serviceName;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_clientRequestsQueue;
    NSMutableArray *_pendingRequests;
    id <BBRemoteDataProviderDelegate> _delegate;
    _Bool _operational;
}

- (void)setSectionInfo:(id)arg1;
- (void)getSectionInfoWithCompletion:(id)arg1;
- (void)setClearedInfo:(id)arg1;
- (void)getClearedInfoWithCompletion:(id)arg1;
- (void)reloadDefaultSectionInfo:(id)arg1;
- (void)reloadSectionParameters:(id)arg1;
- (void)reloadIdentityWithCompletion:(id)arg1;
- (void)withdrawBulletinWithPublisherBulletinID:(id)arg1;
- (void)withdrawBulletinsWithRecordID:(id)arg1;
- (void)modifyBulletin:(id)arg1;
- (void)addBulletin:(id)arg1 forDestinations:(unsigned long long)arg2;
- (void)invalidateBulletins;
- (void)ping:(id)arg1;
- (void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2;
- (_Bool)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2;
- (_Bool)canPerformMigration;
- (void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(id)arg2 completion:(void)arg3;
- (void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(id)arg2 completion:(void)arg3;
- (void)noteSectionInfoDidChange:(id)arg1;
- (void)attachmentAspectRatioForRecordID:(id)arg1 completion:(id)arg2;
- (void)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 completion:(id)arg3;
- (void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2;
- (void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(id)arg3;
- (void)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(id)arg1 lastClearedInfo:(id)arg2 completion:(id)arg3;
- (void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(id)arg3;
- (void)dataProviderDidLoad;
- (void)_logDoesNotRespond:(SEL)arg1;
- (void)_sendRequest:(id)arg1;
- (void)_prependAndSendRequest:(id)arg1;
- (void)_processPendingRequests;
- (void)startWatchdog;
- (void)resume;
- (void)_invalidate;
- (void)invalidate;
- (id)sectionIdentifier;
- (void)_establishAndResumeConnectionWithCompletionHandler:(id)arg1;
- (void)_setupConnection;
- (id)description;
- (void)dealloc;
- (id)initWithSectionID:(id)arg1 serviceName:(id)arg2 appBundleID:(id)arg3 delegate:(id)arg4 replyQueue:(id)arg5;

@end

