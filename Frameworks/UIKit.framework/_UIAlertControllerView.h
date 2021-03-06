/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"

@class NSLayoutConstraint, NSMutableArray, UIAlertController, UICollectionView, UILabel, _UIAlertControllerActionView, _UIAlertControllerCollectionViewFlowLayout, _UIDimmingKnockoutBackdropView, _UIKeyboardLayoutAlignmentView;

// Not exported
@interface _UIAlertControllerView : UIView <UICollectionViewDataSource>
{
    UIAlertController *_alertController;
    UICollectionView *_actionCollectionView;
    _UIAlertControllerCollectionViewFlowLayout *_flowLayout;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIView *_contentViewControllerContainerView;
    _UIAlertControllerActionView *_discreteCancelActionView;
    _UIDimmingKnockoutBackdropView *_backdropView;
    UIView *_contentView;
    UIView *_foregroundView;
    UIView *_dimmingView;
    _UIKeyboardLayoutAlignmentView *_keyboardLayoutAlignmentView;
    UIView *_keyboardLayoutAlignmentAvailableSpaceView;
    long long _layoutOrientation;
    _Bool _inPopover;
    _Bool _hasDimmingView;
    _Bool _showsCancelAction;
    _Bool _cancelActionIsDiscrete;
    _Bool _hasBackdropView;
    _Bool _alignsToKeyboard;
    NSLayoutConstraint *_foregroundViewWidthConstraint;
    NSLayoutConstraint *_contentViewTopConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSLayoutConstraint *_messageLabelTopAlignmentConstraint;
    NSLayoutConstraint *_contentViewControllerViewLeftConstraint;
    NSLayoutConstraint *_contentViewControllerViewRightConstraint;
    NSLayoutConstraint *_contentViewControllerViewTopConstraint;
    NSLayoutConstraint *_contentViewControllerViewBottomConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewTopAlignmentConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewWidthConstraint;
    NSLayoutConstraint *_contentViewControllerContainerViewHeightConstraint;
    NSLayoutConstraint *_collectionViewTopAlignmentConstraint;
    NSLayoutConstraint *_collectionViewWidthConstraint;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    NSLayoutConstraint *_discreteCancelActionViewTopConstraint;
    NSLayoutConstraint *_discreteCancelActionViewLeadingConstraint;
    NSLayoutConstraint *_discreteCancelActionViewWidthConstraint;
    NSLayoutConstraint *_discreteCancelActionViewHeightConstraint;
    NSLayoutConstraint *_centerXConstraint;
    NSLayoutConstraint *_centerYConstraint;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_availableSpaceAlignmentConstraint;
    NSMutableArray *_backdropViewConstraints;
    NSLayoutConstraint *_backdropViewBottomConstraint;
    NSLayoutConstraint *_backdropViewRightConstraint;
    NSMutableArray *_dimmingViewConstraints;
    NSMutableArray *_dimmingViewConstraintsForActionSheetStyle;
    NSMutableArray *_noDimmingViewConstraints;
    NSLayoutConstraint *_foregroundViewCenteringYConstraint;
}

+ (_Bool)requiresConstraintBasedLayout;
+ (void)initialize;
@property(readonly) _UIAlertControllerCollectionViewFlowLayout *_flowLayout; // @synthesize _flowLayout;
@property(readonly) UIView *_dimmingView; // @synthesize _dimmingView;
@property(readonly) UIView *_foregroundView; // @synthesize _foregroundView;
- (long long)tintAdjustmentMode;
- (void)setTintAdjustmentMode:(long long)arg1;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)_reevaluateSuperviewSizingConstraints;
- (void)willMoveToSuperview:(id)arg1;
- (void)_sizeOfContentViewControllerChanged;
- (void)_removeContentViewController;
@property _Bool alignsToKeyboard;
@property _Bool hasBackdropView;
@property _Bool cancelActionIsDiscrete;
@property _Bool showsCancelAction;
@property _Bool hasDimmingView;
@property _Bool inPopover;
@property long long layoutOrientation;
- (id)cancelAction;
- (id)actions;
- (id)contentViewController;
- (id)message;
- (id)title;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)_contentSizeChanged;
- (double)_styleAppropriateVisualAltitude;
- (double)_contentCornerRadius;
- (struct CGSize)_minimumSizeForAllActions;
- (double)_labelHorizontalInsets;
- (double)_contentHorizontalInsets;
- (double)_contentVerticalInsets;
- (double)_bottomLabelScaledValue;
- (double)_bottomLabelPixelOffset;
- (id)_messageColor;
- (double)_messageTopScaledValue;
- (double)_messageScaledValue;
- (double)_messageLabelPixelOffset;
- (id)_messageFont;
- (id)_titleColor;
- (double)_titleTopScaledValue;
- (double)_titleScaledValue;
- (id)_titleFont;
- (double)_singleLabelTopScaledValue;
- (double)_singleLabelTopPixelOffset;
- (double)_singleLabelScaledValue;
- (double)_singleLabelPixelOffset;
- (id)_singleLabelFont;
- (struct CGSize)_contentViewControllerSize;
- (double)_marginBetweenContentAndDiscreteCancelButton;
- (_Bool)hasDiscreteHorizontalCancelAction;
- (_Bool)_actionLayoutIsVertical;
- (_Bool)_wantsHorizontalCollectionViewLayout;
- (_Bool)_wantsHorizontalActionSheet;
- (long long)_numberOfActionsForCollectionView;
- (id)_actionsForCollectionView;
- (id)_orderedActionsForCollectionView;
- (_Bool)_shouldHaveCancelActionInCollectionView;
- (void)_propertiesChanged;
- (void)_alignContentToAvailableSpaceByLayoutAttribute:(long long)arg1;
- (void)_removeDiscreteCancelActionView;
- (void)_updateLabelTextColor;
- (void)_updateLabelFontSizes;
- (void)_actionLayoutDirectionChanged;
- (_Bool)_hasDiscreteCancelAction;
- (id)_bottomMostViewToAlignDiscreteCancelActionViewTo;
- (_Bool)_canLayOutActionsHorizontally;
- (struct CGSize)_collectionViewSizeForHorizontalLayout:(_Bool)arg1 itemSize:(struct CGSize)arg2;
- (struct CGSize)_itemSizeForHorizontalLayout:(_Bool)arg1;
- (double)_idealLayoutWidth;
- (double)_idealWidth;
- (double)_layoutWidthForHorizontalLayout:(_Bool)arg1;
- (double)_availableWidthForHorizontalLayout:(_Bool)arg1;
- (_Bool)_horizontalLayoutCanUseFullWidth;
- (double)_contrainedWidth;
- (struct CGSize)_sizeForLayoutWidthDetermination;
- (_Bool)_buttonsAreTopMost;
- (void)_applyCollectionViewConstraints;
- (void)_applyContentViewControllerContainerViewConstraints;
- (void)_applyMessageConstraints;
- (void)_applyTitleConstraints;
- (void)_applyKeyboardAlignmentViewsConstraints;
- (void)_prepareBackdropViewConstraints;
- (void)_prepareDimmingViewConstraints;
- (void)_applyViewConstraints;
- (void)_prepareKeyboardLayoutAlignmentViews;
- (void)_prepareDimmingView;
- (void)_prepareBackdropView;
- (void)_prepareCancelView;
- (void)_invalidateFlowLayout;
- (void)_prepareActionCollectionView;
- (void)_prepareContentViewControllerContainerView;
- (void)_prepareMesssageLabel;
- (void)_prepareTitleLabel;
- (void)_prepareContentView;
- (void)_prepareForegroundView;
- (void)_prepareViewsAndAddConstraints;
@property UIAlertController *alertController;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

