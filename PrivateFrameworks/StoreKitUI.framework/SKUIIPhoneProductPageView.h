/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@interface SKUIIPhoneProductPageView : UIView
{
    UIView *_view;
    UIView *_bannerView;
    double _bannerOffset;
}

@property(nonatomic) double bannerOffset; // @synthesize bannerOffset=_bannerOffset;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)animateYPosition:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

