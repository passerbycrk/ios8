/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABPropertySimpleEditingCell.h>

#import "ABPeoplePickerNavigationControllerDelegate-Protocol.h"

@interface ABPropertyRelatedNameEditingCell : ABPropertySimpleEditingCell <ABPeoplePickerNavigationControllerDelegate>
{
}

- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)performAccessoryAction;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

