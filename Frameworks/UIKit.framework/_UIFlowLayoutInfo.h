/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, UICollectionViewFlowLayout;

// Not exported
@interface _UIFlowLayoutInfo : NSObject
{
    NSMutableArray *_sections;
    _Bool _useFloatingHeaderFooter;
    _Bool _horizontal;
    _Bool _leftToRight;
    struct CGRect _visibleBounds;
    struct CGSize _layoutSize;
    double _dimension;
    _Bool _isValid;
    NSDictionary *_rowAlignmentOptions;
    UICollectionViewFlowLayout *_layout;
    _Bool _usesFloatingHeaderFooter;
    _Bool _estimatesSizes;
    struct CGSize _contentSize;
}

@property(nonatomic) _Bool estimatesSizes; // @synthesize estimatesSizes=_estimatesSizes;
@property(nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSDictionary *rowAlignmentOptions; // @synthesize rowAlignmentOptions=_rowAlignmentOptions;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) _Bool leftToRight; // @synthesize leftToRight=_leftToRight;
@property(nonatomic) _Bool horizontal; // @synthesize horizontal=_horizontal;
@property(nonatomic) double dimension; // @synthesize dimension=_dimension;
@property(nonatomic) _Bool usesFloatingHeaderFooter; // @synthesize usesFloatingHeaderFooter=_usesFloatingHeaderFooter;
@property(readonly, nonatomic) NSArray *invalidatedIndexPaths;
- (void)setSize:(struct CGSize)arg1 forItemAtIndexPath:(id)arg2;
- (void)didUpdateSizeForSection:(long long)arg1 withDelta:(double)arg2;
- (id)copy;
- (id)snapshot;
- (struct CGRect)frameForItemAtIndexPath:(id)arg1;
- (id)addSection;
- (void)invalidate:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end
