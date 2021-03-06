/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOMapRegion, NSData, NSMutableArray;

@interface GEOPlaceSearchResponse : PBCodable <NSCopying>
{
    double _turnaroundTime;
    GEOMapRegion *_mapRegion;
    NSMutableArray *_namedFeatures;
    NSMutableArray *_placeResults;
    int _status;
    int _statusCodeInfo;
    NSMutableArray *_suggestionEntryLists;
    NSData *_suggestionMetadata;
    struct {
        unsigned int turnaroundTime:1;
        unsigned int statusCodeInfo:1;
    } _has;
}

@property(nonatomic) double turnaroundTime; // @synthesize turnaroundTime=_turnaroundTime;
@property(nonatomic) int statusCodeInfo; // @synthesize statusCodeInfo=_statusCodeInfo;
@property(retain, nonatomic) NSMutableArray *namedFeatures; // @synthesize namedFeatures=_namedFeatures;
@property(retain, nonatomic) NSData *suggestionMetadata; // @synthesize suggestionMetadata=_suggestionMetadata;
@property(retain, nonatomic) NSMutableArray *suggestionEntryLists; // @synthesize suggestionEntryLists=_suggestionEntryLists;
@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(retain, nonatomic) NSMutableArray *placeResults; // @synthesize placeResults=_placeResults;
@property(nonatomic) int status; // @synthesize status=_status;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTurnaroundTime;
@property(nonatomic) _Bool hasStatusCodeInfo;
- (id)namedFeaturesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedFeaturesCount;
- (void)addNamedFeatures:(id)arg1;
- (void)clearNamedFeatures;
@property(readonly, nonatomic) _Bool hasSuggestionMetadata;
- (id)suggestionEntryListsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionEntryListsCount;
- (void)addSuggestionEntryLists:(id)arg1;
- (void)clearSuggestionEntryLists;
@property(readonly, nonatomic) _Bool hasMapRegion;
- (id)placeResultAtIndex:(unsigned long long)arg1;
- (unsigned long long)placeResultsCount;
- (void)addPlaceResult:(id)arg1;
- (void)clearPlaceResults;
- (void)dealloc;
- (void)_geoMapItemsWithTraits:(id)arg1 handler:(id)arg2;

@end

