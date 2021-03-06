/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class GKLeaderboardSetInternal, NSArray, NSString;

@interface GKLeaderboardSet : NSObject <NSCoding, NSSecureCoding>
{
    GKLeaderboardSetInternal *_internal;
}

+ (void)loadLeaderboardSetsWithCompletionHandler:(id)arg1;
+ (void)loadLeaderboardSetsForGame:(id)arg1 withCompletionHandler:(id)arg2;
+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain) GKLeaderboardSetInternal *internal; // @synthesize internal=_internal;
- (void)loadLeaderboardsForGame:(id)arg1 withCompletionHandler:(id)arg2;
- (void)loadLeaderboardsWithCompletionHandler:(id)arg1;
- (void)loadLeaderboardsForGame:(id)arg1 forPlayer:(id)arg2 withCompletionHandler:(id)arg3;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;

// Remaining properties
@property(readonly, retain, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(readonly, retain, nonatomic) NSArray *leaderboardIdentifiers; // @dynamic leaderboardIdentifiers;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

