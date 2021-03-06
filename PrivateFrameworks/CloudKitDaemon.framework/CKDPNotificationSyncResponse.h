/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSData, NSMutableArray;

@interface CKDPNotificationSyncResponse : PBCodable <NSCopying>
{
    NSData *_changeID;
    NSMutableArray *_pushMessages;
}

@property(retain, nonatomic) NSMutableArray *pushMessages; // @synthesize pushMessages=_pushMessages;
@property(retain, nonatomic) NSData *changeID; // @synthesize changeID=_changeID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)pushMessageAtIndex:(unsigned long long)arg1;
- (unsigned long long)pushMessagesCount;
- (void)addPushMessage:(id)arg1;
- (void)clearPushMessages;
@property(readonly, nonatomic) _Bool hasChangeID;

@end

