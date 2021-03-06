/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVPlayer, AVPlayerItem, CALayer, FigSubtitleCALayer, NSObject<OS_dispatch_queue>, NSString;

@interface AVPlayerLayerInternal : NSObject
{
    AVPlayer *_player;
    CALayer *maskLayer;
    CALayer *videoLayer;
    CALayer *closedCaptionLayer;
    NSString *videoGravity;
    NSString *subtitleGravity;
    FigSubtitleCALayer *subtitleLayer;
    struct CGRect latestPlayerLayerBoundsAtRendering;
    struct CGRect latestSubtitleLayoutAtRendering;
    _Bool shouldObservePlayer;
    _Bool isObservingPlayer;
    _Bool hasPlayerToObserve;
    NSObject<OS_dispatch_queue> *serialQueue;
    _Bool isPresentationLayer;
    _Bool isReadyForDisplay;
    struct OpaqueFigSimpleMutex *isReadyForDisplayMutex;
    AVPlayerItem *itemMarkedReadyForDisplay;
    struct CGSize presentationSize;
    struct CGSize latestPresentationSizeAtRendering;
    _Bool isInPIPMode;
}

@end

