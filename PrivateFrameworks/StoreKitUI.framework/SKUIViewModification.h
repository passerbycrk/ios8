/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, SKUIViewReusePool;

@interface SKUIViewModification : NSObject
{
    SKUIViewReusePool *_viewPool;
    NSMutableArray *_views;
}

@property(readonly, nonatomic) NSArray *views; // @synthesize views=_views;
- (void).cxx_destruct;
- (void)addView:(id)arg1;
- (id)addReusableViewWithReuseIdentifier:(id)arg1;
- (id)initWithViewReusePool:(id)arg1;
- (void)_styleItemOfferButton:(id)arg1 forElement:(id)arg2 context:(id)arg3;
- (void)_styleImageView:(id)arg1 withStyle:(id)arg2;
- (id)_itemStateForButton:(id)arg1;
- (id)_addImageViewWithReuseIdentifier:(id)arg1 viewElement:(id)arg2 context:(id)arg3;
- (id)addTomatoRatingViewWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addOfferViewWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addLabelViewWithOrdinalElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addLabelViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addImageViewWithVideoElement:(id)arg1 context:(id)arg2;
- (id)addImageViewWithElement:(id)arg1 context:(id)arg2;
- (id)addImageViewWithBadgeElement:(id)arg1 context:(id)arg2;
- (id)addHorizontalListWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addHeaderViewWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addDividerWithElement:(id)arg1 context:(id)arg2;
- (id)addButtonWithMenuElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addButtonWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (id)addBarRatingWithElement:(id)arg1 width:(double)arg2 context:(id)arg3;

@end

