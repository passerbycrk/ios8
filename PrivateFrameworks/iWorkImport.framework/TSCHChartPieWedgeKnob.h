/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDKnob.h>

@class NSIndexSet;

// Not exported
@interface TSCHChartPieWedgeKnob : TSDKnob
{
    NSIndexSet *mCandidateSeriesIndices;
    NSIndexSet *mSelectedSeriesIndices;
    struct CGPoint mDistanceFromCenter;
    unsigned long long mSeriesIndexHit;
}

@property(readonly, nonatomic) unsigned long long seriesIndexHit; // @synthesize seriesIndexHit=mSeriesIndexHit;
@property(readonly, copy, nonatomic) NSIndexSet *selectedSeriesIndices; // @synthesize selectedSeriesIndices=mSelectedSeriesIndices;
@property(readonly, copy, nonatomic) NSIndexSet *candidateSeriesIndices; // @synthesize candidateSeriesIndices=mCandidateSeriesIndices;
@property(readonly, nonatomic) struct CGPoint distanceFromCenter; // @synthesize distanceFromCenter=mDistanceFromCenter;
- (struct CGPoint)adjustPointForHitLocation:(struct CGPoint)arg1;
- (_Bool)isHitByUnscaledPoint:(struct CGPoint)arg1 andRep:(id)arg2 returningDistance:(double *)arg3 seriesIndexHit:(unsigned long long *)arg4;
- (_Bool)isHitByUnscaledPoint:(struct CGPoint)arg1 andRep:(id)arg2 returningDistance:(double *)arg3;
- (int)dragType;
- (_Bool)obscuresKnob:(id)arg1;
- (_Bool)overlapsWithKnob:(id)arg1;
- (id)layer;
- (void)dealloc;
- (id)initWithSeriesIndices:(id)arg1 onRep:(id)arg2;

@end

