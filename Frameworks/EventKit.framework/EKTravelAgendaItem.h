/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CLLocation, NSDate, NSMutableArray;

@interface EKTravelAgendaItem : NSObject
{
    id _adviceBlock;
    NSMutableArray *_trace;
    int _travelMethod;
    CLLocation *_location;
    NSDate *_date;
}

+ (_Bool)_clLocation:(id)arg1 isEqualToCLLocation:(id)arg2;
@property(readonly, nonatomic) int travelMethod; // @synthesize travelMethod=_travelMethod;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
- (_Bool)isEqualToTravelAgendaItem:(id)arg1;
- (void)dealloc;
- (void)advise:(id)arg1;
- (id)description;
- (id)initWithLocation:(id)arg1 date:(id)arg2 adviceBlock:(id)arg3;
- (id)initWithLocation:(id)arg1 date:(id)arg2 travelMethod:(int)arg3 adviceBlock:(id)arg4;
- (void)traceLocation:(id)arg1 date:(id)arg2;
- (void)tracePrediction:(id)arg1 date:(id)arg2 delay:(double)arg3;
- (_Bool)writeTraceToDisk;

@end
