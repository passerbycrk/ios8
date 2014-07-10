/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSString, PBUnknownFields;

@interface MSPRapIdentifiers : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_deviceIdentifier;
    NSString *_localRapIdentifier;
}

@property(retain, nonatomic) NSString *localRapIdentifier; // @synthesize localRapIdentifier=_localRapIdentifier;
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasLocalRapIdentifier;
@property(readonly, nonatomic) _Bool hasDeviceIdentifier;

@end
