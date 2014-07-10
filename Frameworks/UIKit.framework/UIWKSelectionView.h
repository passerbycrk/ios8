/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIWebSelectionView.h>

@class UIView<UIWKInteractionViewProtocol>, UIWebSelectionHandle;

// Not exported
@interface UIWKSelectionView : UIWebSelectionView
{
    UIView<UIWKInteractionViewProtocol> *_interactionView;
    UIWebSelectionHandle *_handle;
    _Bool _selectionIsBlock;
    _Bool _thresholdIsValid;
    _Bool _usingGesture;
    struct CGPoint _lastTouchPoint;
}

- (void)onAfterScrollOrZoomShowingSelection:(_Bool)arg1;
- (void)onBeforeScrollOrZoomHidingSelection:(_Bool)arg1;
- (void)clearSelection;
- (void)endSelectionCreationWithPoint:(struct CGPoint)arg1;
- (void)selectionCreationEndedWithPoint:(struct CGPoint)arg1;
- (void)showControls;
- (void)updateSelectionCreationWithPoint:(struct CGPoint)arg1;
- (void)selectionCreationUpdatedWithPoint:(struct CGPoint)arg1;
- (void)startSelectionCreationWithPoint:(struct CGPoint)arg1;
- (void)selectionCreationStartedWithPoint:(struct CGPoint)arg1;
- (void)updateFrameAndHandlesWithAnimation:(_Bool)arg1;
- (void)stopAnyAutoscrolling;
- (void)autoscrollTimerFired:(id)arg1;
- (void)updateAutoscrollForHandle:(id)arg1;
- (void)switchToTextModeForHandle:(id)arg1;
- (_Bool)isHorizontalWritingMode;
- (void)switchToBlockModeForHandle:(id)arg1 withPoint:(struct CGPoint)arg2;
- (_Bool)shouldSwitchToBlockModeForHandle:(id)arg1;
- (void)setHandleCenters;
- (void)touchChanged:(id)arg1 forHandle:(id)arg2;
- (void)blockSelectionChangedWithTouch:(long long)arg1 withFlags:(long long)arg2 growThreshold:(double)arg3 shrinkThreshold:(double)arg4;
- (double)handleOffsetForPoint:(struct CGPoint)arg1 handlePosition:(int)arg2;
- (void)touchChanged:(id)arg1 forHandleInText:(id)arg2;
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3;
- (void)selectionChanged;
- (void)updateSelectionRects;
- (void)updateTextRangeViewSelectionRects;
- (id)selectionRects;
- (struct CGRect)fetchSelectionBoundingRect;
- (void)showCopyCalloutWithAnimation:(_Bool)arg1;
- (_Bool)updateRectForCalloutBar:(id)arg1 inWindow:(id)arg2;
- (void)setSelectionMode:(_Bool)arg1;
- (id)tintView;
- (id)initWithView:(id)arg1;

@end
