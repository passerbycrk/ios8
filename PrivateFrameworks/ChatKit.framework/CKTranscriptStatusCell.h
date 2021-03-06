/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKTranscriptLabelCell.h>

@class NSAttributedString, UIButton, UILabel;

@interface CKTranscriptStatusCell : CKTranscriptLabelCell
{
    UIButton *_statusButton;
    double _prevBalloonWidth;
}

@property(nonatomic) double prevBalloonWidth; // @synthesize prevBalloonWidth=_prevBalloonWidth;
@property(retain, nonatomic) UIButton *statusButton; // @synthesize statusButton=_statusButton;
- (void)startZoomInAnimation;
@property(copy, nonatomic) NSAttributedString *attributedButtonText;
- (void)layoutSubviewsForAlignmentContents;
- (void)dealloc;
- (void)configureForChatItem:(id)arg1;

// Remaining properties
@property(readonly, retain, nonatomic) UILabel *label;

@end

