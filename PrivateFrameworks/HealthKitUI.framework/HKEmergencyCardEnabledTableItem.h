/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <HealthKitUI/HKEmergencyCardTableItem.h>

@class UISwitch, UITableViewCell;

@interface HKEmergencyCardEnabledTableItem : HKEmergencyCardTableItem
{
    UITableViewCell *_cell;
    UISwitch *_switch;
    id <HKEmergencyCardEnabledDelegate> _enabledDelegate;
}

@property(nonatomic) __weak id <HKEmergencyCardEnabledDelegate> enabledDelegate; // @synthesize enabledDelegate=_enabledDelegate;
- (void).cxx_destruct;
- (double)heightForFooter;
- (id)titleForFooter;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (struct UIEdgeInsets)separatorInset;
- (void)_switchSwitched:(id)arg1;
- (id)_cell;
- (id)initInEditMode:(_Bool)arg1;

@end

