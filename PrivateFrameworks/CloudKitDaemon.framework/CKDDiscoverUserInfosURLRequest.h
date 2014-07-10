/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDDiscoverUserInfosURLRequest : CKDURLRequest
{
    id _progressBlock;
    NSArray *_emailsToDiscover;
    NSArray *_userRecordIDsToDiscover;
    NSMutableDictionary *_emailAliasToEmailAddress;
    NSMutableDictionary *_hashedEmailByRequestID;
}

@property(retain, nonatomic) NSMutableDictionary *hashedEmailByRequestID; // @synthesize hashedEmailByRequestID=_hashedEmailByRequestID;
@property(retain, nonatomic) NSMutableDictionary *emailAliasToEmailAddress; // @synthesize emailAliasToEmailAddress=_emailAliasToEmailAddress;
@property(retain, nonatomic) NSArray *userRecordIDsToDiscover; // @synthesize userRecordIDsToDiscover=_userRecordIDsToDiscover;
@property(retain, nonatomic) NSArray *emailsToDiscover; // @synthesize emailsToDiscover=_emailsToDiscover;
@property(copy, nonatomic) id progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (void)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)requestOperationClasses;
- (long long)partitionType;
- (long long)serverType;
- (int)operationType;
- (id)initWithEmailAddresses:(id)arg1 userRecordIDs:(id)arg2;

@end
