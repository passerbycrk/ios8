/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBRequest.h"

#import "NSCopying-Protocol.h"

@class CKDPLikedId;

@interface CKDPGetLikesRequest : PBRequest <NSCopying>
{
    CKDPLikedId *_identifier;
    unsigned int _limit;
    CDStruct_88fc3008 _has;
}

+ (id)options;
@property(nonatomic) unsigned int limit; // @synthesize limit=_limit;
@property(retain, nonatomic) CKDPLikedId *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasLimit;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

