/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKEventDetailItem.h>

@class EKCalendar, UITableViewCell;

// Not exported
@interface EKEventCalendarDetailItem : EKEventDetailItem
{
    EKCalendar *_calendar;
    UITableViewCell *_cell;
}

- (void).cxx_destruct;
- (_Bool)_calendarCanBeChanged;
- (_Bool)editItemViewControllerCommit:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (_Bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)init;

@end
