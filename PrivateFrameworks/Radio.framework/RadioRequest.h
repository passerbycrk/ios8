/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, RadioRequestContext;

@interface RadioRequest : NSObject
{
    _Bool _cachedResponse;
    long long _errorCode;
    NSObject<OS_dispatch_queue> *_queue;
    RadioRequestContext *_requestContext;
    double _retryInterval;
    long long _status;
    NSDictionary *_unparsedResponseDictionary;
    _Bool _asynchronousBackgroundRequest;
}

+ (void)loadServiceConfigurationWithCompletionHandler:(id)arg1;
@property(nonatomic, getter=isAsynchronousBackgroundRequest) _Bool asynchronousBackgroundRequest; // @synthesize asynchronousBackgroundRequest=_asynchronousBackgroundRequest;
- (void).cxx_destruct;
- (void)_loadRadioStoreBagAndAllowRetry:(_Bool)arg1 withCompletionHandler:(id)arg2;
- (void)_loadRadioStoreBagWithCompletionHandler:(id)arg1;
@property(readonly, copy) NSDictionary *unparsedResponseDictionary;
- (void)setUnparsedResponseDictionary:(id)arg1;
@property(readonly) long long status;
- (void)setStatus:(long long)arg1;
- (void)setRetryInterval:(double)arg1;
@property(copy) RadioRequestContext *requestContext;
- (void)setErrorCode:(long long)arg1;
- (void)setCachedResponse:(_Bool)arg1;
@property(readonly) double retryInterval;
@property(readonly, getter=isCachedResponse) _Bool cachedResponse;
@property(readonly) long long errorCode;
- (void)cancel;
- (void)dealloc;
- (id)init;

@end
