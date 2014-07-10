/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SSDownloadManagerObserver-Protocol.h"
#import "SSPurchaseManagerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSArray, NSHashTable, NSMapTable, NSMutableArray, NSObject<OS_dispatch_queue>, SSDownloadManager, SSPurchaseManager, UIAlertView;

@interface MPStoreDownloadManager : NSObject <SSDownloadManagerObserver, SSPurchaseManagerDelegate, UIAlertViewDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_blockObservers;
    UIAlertView *_cellularDownloadAlertView;
    NSMutableArray *_cellularDownloadRequestCompletionHandlers;
    SSDownloadManager *_downloadManager;
    NSMutableArray *_downloads;
    NSMapTable *_downloadIdentifiersToDownloads;
    NSMapTable *_downloadsToObservers;
    NSMapTable *_libraryIdentifiersToDownloads;
    NSHashTable *_observersForAllDownloads;
    SSPurchaseManager *_purchaseManager;
    NSMapTable *_storeIdentifiersToDownloads;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_updateMediaItemPropertiesForFinishedStoreDownload:(id)arg1 SSDownload:(id)arg2;
- (void)_updateDownloadsWithAdditions:(id)arg1 removals:(id)arg2;
- (void)_unregisterBlockObserver:(id)arg1;
- (void)_sendDownloadsDidProgressToObserversForDownloads:(id)arg1;
- (void)_sendDownloadsDidFinishToObserversForDownloads:(id)arg1 notifyDownloadManager:(_Bool)arg2 completionHandler:(id)arg3;
- (void)_sendDownloadsDidFinishPurchasesToObserversForDownloads:(id)arg1;
- (void)_sendDownloadsDidChangeToObserversWithAddedDownloads:(id)arg1 removedDownloads:(id)arg2;
- (void)_registerBlockObserver:(id)arg1;
- (void)_onQueue_removeDownloadFromMapTables:(id)arg1;
- (_Bool)_onQueue_hasExistingDownloadForStoreDownload:(id)arg1;
- (id)_onQueue_findStoreDownloadWithSSDownload:(id)arg1 SSPurchase:(id)arg2;
- (void)_onQueue_addDownloadToMapTables:(id)arg1;
- (id)_observersForDownload:(id)arg1;
- (id)_observersForAllDownloads;
- (id)_existingDownloadForSSDownload:(id)arg1;
- (void)_dismissAndCleanupCellularDownloadAlertViewWithResult:(long long)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_matchCellularRestrictedDidChangeNotification:(id)arg1;
- (void)_addPurchaseFinishedHandler:(id)arg1 forDownloads:(void)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2;
- (void)requestPermissionToDownloadWithType:(long long)arg1 completionHandler:(id)arg2;
- (void)removeObserver:(id)arg1 forDownloads:(id)arg2;
- (void)prioritizeDownloads:(id)arg1;
- (id)downloadForStoreID:(long long)arg1;
- (id)downloadForMediaItemPersistentID:(unsigned long long)arg1;
- (id)downloadForMediaItem:(id)arg1;
- (id)downloadForDownloadPersistentIdentifier:(long long)arg1;
- (void)resumeDownloads:(id)arg1;
- (void)pauseDownloads:(id)arg1;
- (void)cancelDownloads:(id)arg1;
- (void)addObserver:(id)arg1 forDownloads:(id)arg2;
- (void)addFinishHandler:(id)arg1 forDownloads:(void)arg2;
- (void)addDownloads:(id)arg1;
@property(readonly, nonatomic) NSArray *downloads;
- (void)dealloc;
- (id)_init;
- (id)init;

@end
