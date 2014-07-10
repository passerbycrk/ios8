/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MKLocationManagerObserver-Protocol.h"

@class GEOPlace, NSString;

// Not exported
@interface MKDistanceDetailProvider : NSObject <MKLocationManagerObserver>
{
    GEOPlace *_place;
    NSString *_distanceToPlace;
    _Bool _useMetric;
    _Bool _useYardsForShortDistances;
    id _updateHandler;
}

+ (_Bool)infoAvailable;
@property(retain) GEOPlace *place; // @synthesize place=_place;
@property(copy) id updateHandler; // @synthesize updateHandler=_updateHandler;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)_updateDistanceToPlace;
- (void)_handleLocaleChangeNotification:(id)arg1;
- (void)dealloc;
- (void)endUpdates;
- (void)beginUpdateWithHandler:(id)arg1;

@end
