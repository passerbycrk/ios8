/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewHeaderFooterView.h"

@class NSAttributedString, UILabel, _UIBackdropView;

@interface RUTableSectionHeaderView : UITableViewHeaderFooterView
{
    _UIBackdropView *_backdropView;
    UILabel *_titleLabel;
    double _backdropTransitionWeighting;
}

@property(nonatomic) double backdropTransitionWeighting; // @synthesize backdropTransitionWeighting=_backdropTransitionWeighting;
- (void).cxx_destruct;
@property(copy, nonatomic) NSAttributedString *attributedTitle;
- (void)setTableViewStyle:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

