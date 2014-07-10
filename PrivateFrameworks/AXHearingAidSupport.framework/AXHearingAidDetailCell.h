/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PSTableCell.h"

@class AXRemoteHearingAidDevice, NSNumberFormatter, UIActivityIndicatorView, UIImageView, UILabel;

@interface AXHearingAidDetailCell : PSTableCell
{
    AXRemoteHearingAidDevice *_device;
    UILabel *_leftLabel;
    UIImageView *_leftBattery;
    UILabel *_rightLabel;
    UIImageView *_rightBattery;
    UIActivityIndicatorView *_loadingIndicator;
    NSNumberFormatter *_numberFormatter;
    _Bool _bluetoothAvailable;
}

@property(retain, nonatomic) AXRemoteHearingAidDevice *device; // @synthesize device=_device;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)updateAvailability;
- (id)imageForBatteryLevel:(double)arg1;
- (void)dealloc;
- (void)bluetoothAvailabilityDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 andDevice:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end
