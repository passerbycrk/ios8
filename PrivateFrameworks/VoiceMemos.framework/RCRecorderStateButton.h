/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIButton.h"

@class CALayer, UIColor;

@interface RCRecorderStateButton : UIButton
{
    UIColor *_outerColor;
    CALayer *_innerLayer;
    UIColor *_innerColor;
    long long _AVCaptureState;
}

@property(nonatomic) long long AVCaptureState; // @synthesize AVCaptureState=_AVCaptureState;
- (void).cxx_destruct;
- (void)_drawOuterCircle;
- (double)_currentStateInnerDrawingAlpha;
- (double)_currentStateTopLevelDrawingAlpha;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

