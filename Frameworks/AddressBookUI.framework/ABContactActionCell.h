/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABLabeledCell.h>

@class ABCardActionGroupItem, ABContactAction, UILabel;

@interface ABContactActionCell : ABLabeledCell
{
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) ABContactAction *action;
@property(readonly, nonatomic) ABCardActionGroupItem *actionGroupItem;
- (void)setCardGroupItem:(id)arg1;
- (void)setLabelTextAttributes:(id)arg1;
- (_Bool)shouldPerformDefaultAction;
- (double)minCellHeight;
- (id)labelView;
- (void)dealloc;

@end

