/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class CADisplayLink, NSArray, UIKeyboardSliceSet;

// Not exported
@interface UIKeyboardSplitTransitionView : UIView
{
    double _currentProgress;
    double _liftOffProgress;
    double _finishProgress;
    double _finishDuration;
    double _finalTransitionStartTime;
    CADisplayLink *_displayLink;
    id _completionBlock;
    struct CGRect _startFrame;
    struct CGRect _endFrame;
    id <UIKeyboardKeyplaneTransitionDelegate> _transitionDelegate;
    id <UIKeyboardSplitTransitionDataSource> _transitionDataSource;
    _Bool _centerFilled;
    _Bool _isRebuilding;
    _Bool _isSplitTranslation;
    UIKeyboardSliceSet *_sliceSet;
}

@property(nonatomic) id <UIKeyboardSplitTransitionDataSource> splitTransitionDataSource; // @synthesize splitTransitionDataSource=_transitionDataSource;
@property(nonatomic) id <UIKeyboardKeyplaneTransitionDelegate> splitTransitionDelegate; // @synthesize splitTransitionDelegate=_transitionDelegate;
@property(copy) id completionBlock; // @synthesize completionBlock=_completionBlock;
- (_Bool)showDictationKey;
- (_Bool)showIntlKey;
- (struct CGImage *)keyImageWithToken:(id)arg1;
- (struct CGImage *)splitKeyboardImage;
- (struct CGImage *)defaultKeyboardImage;
- (_Bool)canDisplayTransition;
- (void)updateWithProgress:(double)arg1;
- (void)finishWithProgress:(double)arg1 completionBlock:(id)arg2;
- (void)transitionToFinalState:(id)arg1;
- (void)finalizeTransition;
- (_Bool)transitionIsVisible;
- (void)rebuildControlKeys:(int)arg1;
- (void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 keyboardType:(long long)arg3 orientation:(long long)arg4;
- (void)transformForProgress:(double)arg1;
- (_Bool)shouldAllowRubberiness;
- (void)rebuildTransitionForSplitStyleChange:(id)arg1;
- (struct CGRect)rectEnclosingKeyplane:(id)arg1;
- (struct CGSize)sizeForShadowLayer:(int)arg1;
- (id)colorsForBackgroundLayer:(int)arg1;
- (void)initializeLayers;
- (id)bottomDropShadow;
- (id)outerCenterDropShadow;
- (id)centerDropShadow;
- (id)topDropShadow;
@property(readonly) NSArray *backgroundLayers;
@property(readonly) NSArray *shadowLayers;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
