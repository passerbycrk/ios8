/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class CKDPShareIdentifier, NSData;

@interface CKDPCommentedOnId : PBCodable <NSCopying>
{
    NSData *_itemId;
    CKDPShareIdentifier *_shareIdentifier;
}

@property(retain, nonatomic) NSData *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) CKDPShareIdentifier *shareIdentifier; // @synthesize shareIdentifier=_shareIdentifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasItemId;
@property(readonly, nonatomic) _Bool hasShareIdentifier;

@end
