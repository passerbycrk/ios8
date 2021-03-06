/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreBluetooth/CBCharacteristic.h>

@class CBUUID, NSArray, NSData, NSMutableArray, NSNumber;

@interface CBMutableCharacteristic : CBCharacteristic
{
    NSNumber *_ID;
    unsigned long long _permissions;
    NSMutableArray *_subscribedCentrals;
}

@property(retain) NSNumber *ID; // @synthesize ID=_ID;
@property(readonly, retain) NSArray *subscribedCentrals; // @synthesize subscribedCentrals=_subscribedCentrals;
@property(nonatomic) unsigned long long permissions; // @synthesize permissions=_permissions;
@property(retain) NSArray *descriptors;
@property(nonatomic) unsigned long long properties;
- (id)description;
- (void)handlePowerNotOn;
- (_Bool)handleCentralUnsubscribed:(id)arg1;
- (_Bool)handleCentralSubscribed:(id)arg1;
- (void)dealloc;
- (id)initWithService:(id)arg1 dictionary:(id)arg2;
- (id)initWithType:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 permissions:(unsigned long long)arg4;

// Remaining properties
@property(retain, nonatomic) CBUUID *UUID;
@property(retain) NSData *value;

@end

