/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAsset, AVAudioMix, AVCustomVideoCompositorSession, AVPlayerConnection, AVPlayerItem, AVPropertyStorage, AVVideoComposition, AVWeakReference, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface AVPlayerItemInternal : NSObject
{
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    AVWeakReference *weakReference;
    NSObject<OS_dispatch_queue> *figConfigurationQueue;
    struct OpaqueVTPixelBufferAttributesMediator *pixelBufferAttributeMediator;
    struct OpaqueCMTimebase *proxyTimebase;
    _Bool isCurrentPlayerItem;
    NSArray *cachedTracks;
    NSMutableArray *syncLayers;
    NSArray *itemOutputs;
    NSMutableArray *itemVideoOutputs;
    NSMutableDictionary *itemLegibleOutputsForKeys;
    NSMutableDictionary *itemMetadataOutputsForKeys;
    _Bool suppressesVideoLayers;
    struct OpaqueCMTimebase *figTimebase;
    struct OpaqueFigPlaybackItem *figPlaybackItem;
    AVPlayerItem *previousItem;
    AVPlayerItem *nextItem;
    struct OpaqueFigCPEProtector *figCPEProtector;
    id <AVPlayerItemDelegate> delegate;
    AVWeakReference *playerReference;
    AVPlayerConnection *playerConnection;
    NSObject<OS_dispatch_queue> *stateDispatchQueue;
    AVPropertyStorage *propertyStorage;
    long long status;
    NSError *error;
    NSURL *URL;
    AVAsset *asset;
    NSArray *automaticallyLoadedAssetKeys;
    AVAsset *assetWithFigPlaybackItem;
    NSArray *trackIDsForAssetWithFigPlaybackItem;
    NSArray *timedMetadata;
    CDStruct_1b6d18a9 initialTime;
    CDStruct_1b6d18a9 initialToleranceBefore;
    CDStruct_1b6d18a9 initialToleranceAfter;
    CDStruct_1b6d18a9 forwardPlaybackEndTime;
    CDStruct_1b6d18a9 reversePlaybackEndTime;
    NSDate *initialDate;
    NSDate *initialEstimatedDate;
    _Bool initialLimitReadAhead;
    _Bool allowsExtendedReadAhead;
    CDStruct_1b6d18a9 maximumTrailingBufferDuration;
    long long initialPlaybackLikelyToKeepUpTrigger;
    _Bool initialAlwaysMonitorsPlayability;
    _Bool initialWillNeverSeekBackwardsHint;
    _Bool initialContinuesPlayingDuringPrerollForSeek;
    _Bool initialContinuesPlayingDuringPrerollForRateChange;
    _Bool usesIFrameOnlyPlaybackForHighRateScaledEdits;
    _Bool usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
    CDStruct_1b6d18a9 minimumIntervalForIFrameOnlyPlayback;
    _Bool minimumIntervalForIFrameOnlyPlaybackWasSet;
    float speedThresholdForIFrameOnlyPlayback;
    _Bool speedThresholdForIFrameOnlyPlaybackWasSet;
    struct __CFString *initialFigTimePitchAlgorithm;
    _Bool savesDownloadedDataToDiskWhenDone;
    _Bool nonForcedSubtitlesEnabled;
    _Bool networkUsuallyExceedsMaxBitRate;
    _Bool allowProgressiveSwitchUp;
    float maximumBitRate;
    AVAudioMix *audioMix;
    AVVideoComposition *videoComposition;
    AVWeakReference *clientsOriginalVideoComposition;
    void *figVideoCompositor;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    _Bool seekingWaitsForVideoCompositionRendering;
    NSArray *textStyleRules;
    NSDictionary *gaplessInfo;
    long long initialVariantIndex;
    NSDictionary *audibleDRMInfo;
    NSDictionary *rampInOutInfo;
    float soundCheckVolumeNormalization;
    float volumeAdjustment;
    NSMutableArray *handlersToCallWhenReadyForEnqueueing;
    NSMutableDictionary *mediaOptionsSelectedByClient;
    _Bool haveInitialSamples;
    _Bool haveCPEProtector;
    _Bool didSetAssetToAssetWithFigPlaybackItem;
    _Bool didBecomeReadyForBasicInspection;
    _Bool didBecomeReadyForInspectionOfMediaSelectionOptions;
    _Bool didBecomeReadyForInspectionOfTracks;
    _Bool didBecomeReadyForInspectionOfPresentationSize;
    _Bool didBecomeReadyForInspectionOfDuration;
    _Bool didInformObserversAboutAvailabilityOfTracks;
    _Bool didFireKVOForAssetForNonStreamingItem;
    _Bool wasInitializedWithURL;
    _Bool needTimedMetadataNotification;
    _Bool externalSubtitlesEnabled;
    _Bool externalProtectionRequested;
    _Bool requiresAccessLog;
    int eqPreset;
    struct OpaqueFigSimpleMutex *seekIDMutex;
    unsigned int nextSeekIDToGenerate;
    int pendingSeekID;
    id seekCompletionHandler;
    NSString *dataYouTubeID;
    unsigned int RTCReportingFlags;
    NSString *serviceIdentifier;
    NSString *mediaKind;
    unsigned long long restrictions;
}

@end

