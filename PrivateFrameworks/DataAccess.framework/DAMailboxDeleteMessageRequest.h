/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DataAccess/DAMailboxRequest.h>

@class NSString;

@interface DAMailboxDeleteMessageRequest : DAMailboxRequest
{
}

- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initRequestWithMessageID:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *messageID;

@end

