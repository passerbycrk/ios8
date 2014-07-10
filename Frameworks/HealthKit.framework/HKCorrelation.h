/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <HealthKit/HKObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSMutableSet, NSSet, NSUUID;

@interface HKCorrelation : HKObject <NSSecureCoding>
{
    NSMutableSet *_objects;
}

+ (_Bool)supportsSecureCoding;
+ (id)correlationWithObjects:(id)arg1 metadata:(id)arg2;
+ (id)correlationWithObjects:(id)arg1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_addCorrelatedObjects:(id)arg1;
- (void)_addCorrelatedObject:(id)arg1;
- (id)description;
@property(readonly) NSSet *objects;
- (id)_init;

// Remaining properties
@property(readonly, getter=_UUID) NSUUID *UUID;

@end
