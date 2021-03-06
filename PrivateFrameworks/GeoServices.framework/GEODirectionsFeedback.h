/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSData, NSMutableArray;

@interface GEODirectionsFeedback : PBCodable <NSCopying>
{
    CDStruct_740ee37d *_stepFeedbacks;
    unsigned long long _stepFeedbacksCount;
    unsigned long long _stepFeedbacksSpace;
    NSData *_directionResponseID;
    NSMutableArray *_traversedRouteIDs;
}

@property(retain, nonatomic) NSMutableArray *traversedRouteIDs; // @synthesize traversedRouteIDs=_traversedRouteIDs;
@property(retain, nonatomic) NSData *directionResponseID; // @synthesize directionResponseID=_directionResponseID;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setStepFeedbacks:(CDStruct_740ee37d *)arg1 count:(unsigned long long)arg2;
- (CDStruct_740ee37d)stepFeedbackAtIndex:(unsigned long long)arg1;
- (void)addStepFeedback:(CDStruct_740ee37d)arg1;
- (void)clearStepFeedbacks;
@property(readonly, nonatomic) CDStruct_740ee37d *stepFeedbacks;
@property(readonly, nonatomic) unsigned long long stepFeedbacksCount;
- (id)traversedRouteIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)traversedRouteIDsCount;
- (void)addTraversedRouteIDs:(id)arg1;
- (void)clearTraversedRouteIDs;
@property(readonly, nonatomic) _Bool hasDirectionResponseID;
- (void)dealloc;

@end

