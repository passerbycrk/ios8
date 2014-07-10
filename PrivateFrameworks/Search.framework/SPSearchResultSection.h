/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface SPSearchResultSection : PBCodable <NSCopying>
{
    NSString *_category;
    NSString *_displayIdentifier;
    unsigned int _domain;
    int _flags;
    NSString *_icon;
    NSMutableArray *_results;
    NSString *_scheme;
    struct {
        unsigned int domain:1;
        unsigned int flags:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(nonatomic) int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *displayIdentifier; // @synthesize displayIdentifier=_displayIdentifier;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) unsigned int domain; // @synthesize domain=_domain;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)addResults:(id)arg1;
- (void)clearResults;
@property(nonatomic) _Bool hasFlags;
@property(readonly, nonatomic) _Bool hasScheme;
@property(readonly, nonatomic) _Bool hasCategory;
@property(readonly, nonatomic) _Bool hasDisplayIdentifier;
@property(readonly, nonatomic) _Bool hasIcon;
@property(nonatomic) _Bool hasDomain;
- (void)dealloc;
- (_Bool)hasEquivalentResults:(id)arg1;

@end
