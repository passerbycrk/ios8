/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Preferences/PSControlTableCell.h>

@class UIView;

@interface PSSliderTableCell : PSControlTableCell
{
    UIView *_disabledView;
}

- (void)layoutSubviews;
- (void)setValue:(id)arg1;
- (id)controlValue;
- (void)dealloc;
- (_Bool)canReload;
- (void)setCellEnabled:(_Bool)arg1;
- (id)titleLabel;
- (id)newControl;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end
