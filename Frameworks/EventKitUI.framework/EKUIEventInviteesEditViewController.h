/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKEditItemViewController.h>

@class EKEvent, EKUIEventInviteesViewController, NSDate;

// Not exported
@interface EKUIEventInviteesEditViewController : EKEditItemViewController
{
    EKEvent *_event;
    EKUIEventInviteesViewController *_controller;
}

- (void).cxx_destruct;
@property(copy, nonatomic) id numberOfConflictsChangedBlock;
@property(readonly, nonatomic) long long numberOfConflicts;
@property(readonly, nonatomic) NSDate *selectedEndDate;
@property(readonly, nonatomic) NSDate *selectedStartDate;
- (void)loadView;
- (id)initWithEvent:(id)arg1;

@end
