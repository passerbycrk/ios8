/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@interface CLVehicleSpeedInternal : NSObject <NSCopying>
{
    struct {
        double speed;
        double timestamp;
    } fSpeed;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithClientVehicleSpeed:(CDStruct_c3b9c2ee)arg1;

@end

