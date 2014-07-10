/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

// Not exported
@interface EKTimeZone : NSObject <NSCopying>
{
    NSString *_name;
    void *_internal;
    long long _lastStart;
    long long _lastEnd;
    unsigned long long _lastIndex;
    double _offset;
}

+ (id)timeZoneWithNSTimeZone:(id)arg1;
+ (id)timeZoneWithName:(id)arg1;
- (double)secondsFromGMT;
- (id)abbreviation;
- (id)abbreviationForAbsoluteTime:(double)arg1;
- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)arg1;
- (double)secondsFromGMTForAbsoluteTime:(double)arg1;
- (id)abbreviationForDate:(id)arg1;
- (double)secondsFromGMTForDate:(id)arg1;
- (id)_abbreviationForIndex:(unsigned long long)arg1;
- (unsigned long long)_indexForAbsoluteTime:(double)arg1;
- (id)name;
- (id)NSTimeZone;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithOffset:(double)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1;

@end
