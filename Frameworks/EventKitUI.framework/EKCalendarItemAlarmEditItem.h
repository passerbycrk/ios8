/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKCalendarItemEditItem.h>

@class CalendarEventAlarmTable, NSArray;

// Not exported
@interface EKCalendarItemAlarmEditItem : EKCalendarItemEditItem
{
    CalendarEventAlarmTable *_alarmTable;
    unsigned long long _disclosedSubitem;
    NSArray *_alarms;
    int _lastSeenAllDayState;
    _Bool _userChangedAlarm;
    _Bool _hasLeaveNowAlarm;
    _Bool _canHaveLeaveNowAlarm;
}

- (void).cxx_destruct;
- (_Bool)saveAndDismissWithForce:(_Bool)arg1;
- (_Bool)_alarmsMatchCalendarItem;
- (void)refreshFromCalendarItemAndStore;
- (void)_updateAlarms;
- (_Bool)_calendarItemHasLeaveNowAlarm;
- (_Bool)configureForCalendarConstraints:(id)arg1;
- (void)_updateDefaultAlarm;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)editItemViewControllerCommit:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfSubitems;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (id)init;

@end
