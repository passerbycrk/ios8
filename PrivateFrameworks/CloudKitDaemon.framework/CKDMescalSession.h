/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSObject<OS_dispatch_group>, NSOperationQueue;

@interface CKDMescalSession : NSObject
{
    _Bool _isSetup;
    _Bool _renewing;
    _Bool _didCheckGoldenTicket;
    NSObject<OS_dispatch_group> *_renewalGroup;
    NSOperationQueue *_renewQueue;
    NSData *_goldenTicket;
}

+ (id)sharedMescalSession;
@property(nonatomic) _Bool didCheckGoldenTicket; // @synthesize didCheckGoldenTicket=_didCheckGoldenTicket;
@property(retain, nonatomic) NSData *goldenTicket; // @synthesize goldenTicket=_goldenTicket;
@property(retain, nonatomic) NSOperationQueue *renewQueue; // @synthesize renewQueue=_renewQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *renewalGroup; // @synthesize renewalGroup=_renewalGroup;
@property(nonatomic) _Bool renewing; // @synthesize renewing=_renewing;
@property(nonatomic) _Bool isSetup; // @synthesize isSetup=_isSetup;
- (void).cxx_destruct;
- (id)processSignedData:(id)arg1 withSignature:(id)arg2 error:(id *)arg3;
- (id)signatureForData:(id)arg1 error:(id *)arg2;
- (void)renewMescalSessionInContext:(id)arg1 withCallback:(id)arg2;
- (void)resetMescalSession;
- (id)exchangeData:(id)arg1 withServerVersion:(int)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)init;
- (_Bool)_setUp;
- (void)_teardown;

@end
