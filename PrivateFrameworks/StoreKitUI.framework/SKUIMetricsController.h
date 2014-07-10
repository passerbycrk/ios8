/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSNumber, NSObject<OS_dispatch_source>, NSString, SKUIMetricsImpressionSession, SSMetricsConfiguration, SSMetricsController;

@interface SKUIMetricsController : NSObject
{
    NSNumber *_accountID;
    SKUIMetricsImpressionSession *_activeImpressionsSession;
    NSString *_applicationIdentifier;
    SSMetricsController *_controller;
    _Bool _flushesImmediately;
    SSMetricsConfiguration *_globalConfiguration;
    NSString *_hostApplicationIdentifier;
    _Bool _impressionsEnabled;
    NSObject<OS_dispatch_source> *_impressionsTimer;
    _Bool _loggingEnabled;
    SSMetricsConfiguration *_pageConfiguration;
    NSString *_pageContext;
    NSString *_pageURL;
    NSString *_topic;
    NSString *_userAgent;
    NSString *_windowOrientation;
}

+ (void)flushImmediately;
@property(copy, nonatomic) NSString *windowOrientation; // @synthesize windowOrientation=_windowOrientation;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(copy, nonatomic) NSString *pageURL; // @synthesize pageURL=_pageURL;
@property(copy, nonatomic) NSString *pageContext; // @synthesize pageContext=_pageContext;
@property(retain, nonatomic) SSMetricsConfiguration *pageConfiguration; // @synthesize pageConfiguration=_pageConfiguration;
@property(copy, nonatomic) NSString *hostApplicationIdentifier; // @synthesize hostApplicationIdentifier=_hostApplicationIdentifier;
@property(readonly, nonatomic) SSMetricsConfiguration *globalConfiguration; // @synthesize globalConfiguration=_globalConfiguration;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountID;
- (void).cxx_destruct;
- (void)_recordActiveImpressions;
- (void)_insertEvent:(id)arg1;
- (void)_waitUntilRecordingComplete;
- (id)tokenStringWithElements:(id)arg1;
- (void)recordEvent:(id)arg1;
- (void)recordBuyConfirmedEventsForItems:(id)arg1 purchaseResponses:(id)arg2;
- (void)pingURLs:(id)arg1 withClientContext:(id)arg2;
- (void)pingURLs:(id)arg1;
- (id)performActionForItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(id)arg4;
- (id)performActionForItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3;
- (id)performActionForItem:(id)arg1 clientContext:(id)arg2;
- (id)performActionForItem:(id)arg1;
- (id)locationWithPosition:(long long)arg1 type:(id)arg2 fieldData:(id)arg3;
- (id)locationWithPageComponent:(id)arg1;
- (id)itemOfferClickEventWithItem:(id)arg1 locationPosition:(long long)arg2;
@property(readonly, nonatomic) double flushInterval;
- (void)flushImmediately;
- (id)compoundStringWithElements:(id)arg1;
- (void)closeImpressionsSession;
- (id)clickEventWithItem:(id)arg1 locationPosition:(long long)arg2;
- (_Bool)canRecordEventWithType:(id)arg1;
@property(readonly, nonatomic) SKUIMetricsImpressionSession *activeImpressionsSession;
- (void)dealloc;
- (id)initWithGlobalConfiguration:(id)arg1;

@end
