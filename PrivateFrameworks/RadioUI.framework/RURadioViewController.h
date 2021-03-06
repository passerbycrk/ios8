/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MPUDataSourceViewController.h"

#import "MPUMiniPlayerParticipant-Protocol.h"
#import "MPUTextDrawingCacheInvalidationObserver-Protocol.h"
#import "RUCreateStationViewControllerDelegate-Protocol.h"
#import "RUEditStationsViewControllerDelegate-Protocol.h"
#import "RUHistoryViewControllerDelegate-Protocol.h"
#import "RURadioCollectionViewDelegate-Protocol.h"
#import "RUSearchViewControllerDelegate-Protocol.h"
#import "RUSignInViewControllerDelegate-Protocol.h"
#import "RUStationActionsViewControllerDelegate-Protocol.h"
#import "RUStationTreeViewControllerDelegate-Protocol.h"
#import "RUTermsViewControllerDelegate-Protocol.h"
#import "RUWelcomeViewControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSMapTable, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_source>, RUMiniPlayerCoordinator, RUPlaceholderView, RURadioCollectionView, RURadioPlaybackCoordinator, RUSearchViewController, RUSignInViewController, RUTermsViewController, RUWelcomeViewController, RadioStation, UIAlertView, UIButton, UILabel, UIScrollView, UISearchDisplayController, UIView;

@interface RURadioViewController : MPUDataSourceViewController <MPUMiniPlayerParticipant, MPUTextDrawingCacheInvalidationObserver, RUEditStationsViewControllerDelegate, RUCreateStationViewControllerDelegate, RUHistoryViewControllerDelegate, RURadioCollectionViewDelegate, RUSearchViewControllerDelegate, RUSignInViewControllerDelegate, RUStationActionsViewControllerDelegate, RUStationTreeViewControllerDelegate, RUTermsViewControllerDelegate, RUWelcomeViewControllerDelegate, UIAlertViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSMutableArray *_authenticationResponseHandlers;
    id _deferredDeselectCompletionHandler;
    long long _deselectDeferralCount;
    NSMapTable *_dispatchSourceImpressionTimersByStation;
    UIButton *_editButton;
    NSArray *_featuredStations;
    RURadioCollectionView *_featuredStationsCollectionView;
    UILabel *_featuredStationsLabel;
    UIAlertView *_freeloaderAlertView;
    _Bool _hasEverReceivedWillAppear;
    _Bool _hasShownFeaturedSlideIn;
    NSObject<OS_dispatch_source> *_heartbeatInvalidTimerSource;
    double _highlightedItemTimestamp;
    NSObject<OS_dispatch_group> *_initialArtworkLoadGroup;
    _Bool _isAllowedToPreHeatTextDrawingCaches;
    _Bool _isFeaturedStationSlideInProgress;
    _Bool _isVisible;
    _Bool _isVisuallyEngaged;
    NSArray *_myStations;
    RURadioCollectionView *_myStationsCollectionView;
    double _myStationsCollectionViewVerticalOffset;
    UILabel *_myStationsLabel;
    UIButton *_newButton;
    NSMutableArray *_optInCompletionHandlers;
    RUPlaceholderView *_placeholderView;
    RadioStation *_prospectiveStation;
    UIScrollView *_scrollView;
    UISearchDisplayController *_searchDisplayController;
    RUSearchViewController *_searchResultsViewController;
    UIButton *_seeAllButton;
    _Bool _shouldScrollSearchBar;
    _Bool _shouldShowSeeAllButton;
    RUSignInViewController *_signInViewController;
    UIView *_snapshotView;
    RUTermsViewController *_termsViewController;
    RUWelcomeViewController *_welcomeViewController;
    RUMiniPlayerCoordinator *_miniPlayerCoordinator;
    RURadioPlaybackCoordinator *_playbackCoordinator;
    id <RURadioViewControllerDelegate> _delegate;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(nonatomic) __weak id <RURadioViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) RURadioPlaybackCoordinator *playbackCoordinator; // @synthesize playbackCoordinator=_playbackCoordinator;
@property(retain, nonatomic) RUMiniPlayerCoordinator *miniPlayerCoordinator; // @synthesize miniPlayerCoordinator=_miniPlayerCoordinator;
- (void).cxx_destruct;
- (id)_visibleFeaturedStations;
- (void)_updateVisualEngagement;
- (void)_updateVisibleCellsNowPlayingStates;
- (void)_updateViewForNetworkType:(long long)arg1;
- (void)_updateViewForHorizontalSizeClassChange;
- (void)_updateSearchBarFrameForced:(_Bool)arg1;
- (void)_updateScrollViewContentSize;
- (void)_updateZOrderingForCollectionView:(id)arg1;
- (void)_updateScrollViewHiddenState;
- (void)_updateForChangedStoreBag:(id)arg1;
- (void)_updateBarButtonItems;
- (void)_synchronizeWithService;
- (id)_subscriptionSummaryForStation:(id)arg1;
- (void)_startHeartbeatInvalidTimer;
- (void)_showWelcomeViewControllerIfNeeded;
- (void)_setIsVisible:(_Bool)arg1;
- (id)_searchDisplayController;
- (struct CGRect)_searchBarSearchingFrame;
- (struct UIEdgeInsets)_searchBarContentInset;
- (void)_scrollToAddedStationWithContext:(id)arg1 stationDidExistBeforeAdding:(_Bool)arg2;
- (struct CGSize)_rootViewSizeForCollectionView:(id)arg1;
- (void)_reloadSeeAllButtonAnimated:(_Bool)arg1;
- (void)_reloadImpressionTimersForVisibleStations;
- (void)_refreshFeaturedStations;
- (void)_preHeatTextDrawingCaches;
- (void)_preHeatTextDrawingCacheForSubscriptionSummariesOfMyStations;
- (void)_preHeatTextDrawingCacheForNamesOfMyStations;
- (void)_preHeatTextDrawingCacheForNamesOfFeaturedStations;
- (void)_layoutScrollViews;
- (void)_layoutRadioView;
- (void)_layoutCell:(id)arg1;
- (_Bool)_isStationNowPlaying:(id)arg1;
- (_Bool)_isNoStack;
- (_Bool)_isNetworkTypeAllowed:(long long)arg1;
- (void)_displayServiceUnavailable;
- (id)_createBackdropBackgroundView;
- (void)_createPlaceholderViewIfNeeded;
- (void)_completeStationAdditionTransactionWithContext:(id)arg1 stationDidExistBeforeAdding:(_Bool)arg2;
- (void)_cancelHeartbeatInvalidTimer;
- (void)_authenticateForActiveAccountWithResponseHandler:(id)arg1;
- (void)_attemptToPlayStation:(id)arg1 withPrefixItem:(id)arg2 keepPlayingCurrentItemIfPossible:(_Bool)arg3;
- (void)_addStationWithDictionary:(id)arg1 fromViewController:(id)arg2;
- (id)_addStationTileImage;
- (void)_storeBagDidLoadNotification:(id)arg1;
- (void)_statusBarHeightChangedNotification:(id)arg1;
- (void)_radioRequestDidFinishNotification:(id)arg1;
- (void)_playbackCoordinatorStationDidChangeNotification:(id)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_heartbeatDidChangeNotification:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_cellularNetworkingAllowedDidChangeNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_seeAllButtonAction:(id)arg1;
- (void)_newAction:(id)arg1;
- (void)_historyAction:(id)arg1;
- (void)_editAction:(id)arg1;
- (void)_doneAction:(id)arg1;
- (Class)_nowPlayingViewControllerClass;
- (void)scrollStationToVisible:(id)arg1 withCompletionHandler:(id)arg2;
- (void)completeAdditionOfStationWithContext:(id)arg1 animated:(_Bool)arg2;
- (void)prepareToAddStation;
- (void)attemptOptInWithCompletionHandler:(id)arg1;
- (void)addStationWithDictionary:(id)arg1 completionHandler:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (id)_sortCollectionCells:(id)arg1 byDistanceFromCenter:(struct CGPoint)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)welcomeViewController:(id)arg1 willDisplayFailureAlert:(id)arg2;
- (void)welcomeViewControllerDidReceiveServiceUnavailable:(id)arg1;
- (void)welcomeViewControllerDidOptIn:(id)arg1;
- (void)termsViewController:(id)arg1 didAcceptTerms:(_Bool)arg2;
- (void)stationTreeViewController:(id)arg1 didSelectStationTreeNode:(id)arg2;
- (void)signInViewController:(id)arg1 didCompleteWithAuthenticateResponse:(id)arg2;
- (void)searchViewControllerWillEndSearching:(id)arg1;
- (void)searchViewControllerWillBeginSearching:(id)arg1;
- (void)searchViewController:(id)arg1 didSelectStation:(id)arg2;
- (void)searchViewControllerDidEndSearching:(id)arg1;
- (void)searchViewControllerDidBeginSearching:(id)arg1;
- (id)metricsPageTypeForSearchViewController:(id)arg1;
- (id)metricsPageDescriptionForSearchViewController:(id)arg1;
- (void)historyViewControllerDidFinish:(id)arg1;
- (void)editStationsViewControllerDidFinish:(id)arg1;
- (void)createStationViewControllerDidFinish:(id)arg1;
- (void)createStationViewController:(id)arg1 didSelectStation:(id)arg2;
- (void)radioCollectionViewDidChangeContentSize:(id)arg1;
- (void)textDrawingCacheWasInvalidated:(id)arg1;
- (id)MPU_prospectivePlaybackInformation;
- (_Bool)MPU_beginPlaybackForVisibleContent;
- (void)reloadData;
- (void)traitCollectionDidChange:(id)arg1;
- (id)contentScrollView;
- (_Bool)MPH_supportsCoverFlow;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(id)arg2;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;

@end

