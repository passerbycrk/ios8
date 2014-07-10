/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class MSPDirectionsSearch, MSPQuerySearch, NSMutableArray, NSString, PBUnknownFields;

@interface MSPSearchRequestStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    MSPDirectionsSearch *_directionsSearch;
    NSString *_identifier;
    MSPQuerySearch *_querySearch;
    NSMutableArray *_rapIdentifiers;
    int _searchType;
    struct {
        unsigned int searchType:1;
    } _has;
}

@property(retain, nonatomic) MSPDirectionsSearch *directionsSearch; // @synthesize directionsSearch=_directionsSearch;
@property(retain, nonatomic) MSPQuerySearch *querySearch; // @synthesize querySearch=_querySearch;
@property(retain, nonatomic) NSMutableArray *rapIdentifiers; // @synthesize rapIdentifiers=_rapIdentifiers;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) int searchType; // @synthesize searchType=_searchType;
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
@property(readonly, nonatomic) _Bool hasDirectionsSearch;
@property(readonly, nonatomic) _Bool hasQuerySearch;
- (id)rapIdentifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)rapIdentifiersCount;
- (void)addRapIdentifier:(id)arg1;
- (void)clearRapIdentifiers;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(nonatomic) _Bool hasSearchType;

@end
