/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIAlertButton.h>

@class UILabel;

// Not exported
@interface UIAlertLabeledButton : UIAlertButton
{
    UILabel *_typeLabel;
    double _titleOffset;
}

@property(nonatomic) double titleOffset; // @synthesize titleOffset=_titleOffset;
- (void)dealloc;
- (void)layoutSubviews;
@property(readonly, nonatomic) UILabel *typeLabel;

@end
